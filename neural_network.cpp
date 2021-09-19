#include <iostream>
#include <vector>
#include "neural_network.h"
#include "layer.h"
#include "neuron.h"
#include <assert.h>
#include <fstream>
#include <math.h>



using namespace std;


/*

The initializeNeuralNetwork() method is called fron the neuralNetwork consturctor and is used to set up the main framework of the project. 
A neural network is an object which contains other types of objects: layers and neurons. 
The code below loops through the user defined dimensions of the network, creating layer objects and neurons per layer. 

*/
void neuralNetwork::initializeNeuralNetwork()
{
    cout << "******** Initializing a neural network ********"<< "\n";
    int neuron_ports;
    // The program will only deal with a 3 layer network
    for (int layer_number = 0; layer_number < 3; ++layer_number){
        Layer layer = Layer(layer_number);                                                      // Creating the layer object
        if (layer_number == 2) {
            neuron_ports = 0;                                                                   // layer_number 2 is output layer, output layer neurons have no output ports
        }
        else {
            neuron_ports = _frame[layer_number +1];                                             // Input/hidden layer neurons have the number of output ports which match the number of neurons on the next layer 
        }
        
        for(int neuron_number = 0;neuron_number <=_frame[layer_number]; ++neuron_number){
            Neuron neuron = Neuron(neuron_number,layer_number,neuron_ports);                    // Creating neurons, the number per layer has been chosen by the user 
            cout << "\t- Making neuron " << neuron_number<< " on layer "<<layer_number << endl;

            layer.addNeuronToLayer(neuron);                                                     // Add this neuron to the layer it belongs do

        }
        neurons_per_layer.push_back(layer._neurons_on_layer);                                   // Here we are keeping track of the number of neurons per layer, this is used to feed forward values
        
        _network_layers.push_back(layer);                                                       // Adding the layers to a network_layers member variable. This needs to happen after all objects are created
    }

}


/*

The feedForward method is used to propogate input values into a network through the full network (i.e. each neuron) in one direction only. 
Data starts at the input layer and is forced into the input layer neurons, this is the first stage whereby the neurons have no processing power (the input layer neurons output value = input value)
The data from the input layer neuron outputs is then propogated into the hidden layer neurons. This is the second stage of the feedforward method. 
In the second stage, neurons on the hidden and output layer have to do some processing. There are two stages in the non-input layer processing: 

    1. Calculate the equivalent input on each neuron port using the standard equation : input value on that port (coming from previous layer neuron) * weight on that port
    2. Calculate a sum of all weighted inputs including the bias neuron
    3. Send this sum into a transfer function method, here we are using the standard tanh method. This is use to shape the neurons output. 
    4. Neuron takes the value outputted by the transfer function and updates its output value

*/
void neuralNetwork::feedForward(vector<double> &inputValues)
{
    cout << "******** Starting Feedforward Method ********"<< "\n";

    assert(inputValues.size() == neurons_per_layer[0]-1);   //removing the bias neuron (input layer is element 0)
    

    // First stage: force the input values into each neuron on the input layer
    // Neurons on the input layer do not have to do any processing
    cout << "\tSetting input layer neurons output values "<<endl;
    for (int x = 0; x <inputValues.size(); ++x)
    {
        _network_layers[0].layerNeurons[x].setNeuronOutputValue(inputValues[x]);   //__network_layers[0] is the input layer of the network
        
        
        cout<< "\t- Layer 0"  << " neuron: " <<_network_layers[0].layerNeurons[x].returnNeuronNumber()<< " has output value: " << _network_layers[0].layerNeurons[x].returnNeuronOutputValue()<< endl;
    }
    
    // Second stage: propogate the values in input layer in through the frame
    // Non input layer neurons have to do some processing which is explained above.
    cout << "\tSetting hidden/output layer neurons output values "<<endl;
    for (int layer = 1; layer <_network_layers.size(); ++layer)
    {
        Layer previous_layer = _network_layers[layer-1]; // This is needed by the neuron feedforward method
      
        for(int n = 0; n <_network_layers[layer].layerNeurons.size()-1; ++ n)   // Excluding bias neuron
        {
           double n_sum = 0;

           for(int prev = 0; prev < previous_layer.layerNeurons.size(); ++prev)     // including the bias neuron
           {
                // Error checking the weights are correct
                assert(previous_layer.layerNeurons[prev].returnNeuronWeights()[_network_layers[layer].layerNeurons[n].returnNeuronNumber()] <= 1 && previous_layer.layerNeurons[prev].returnNeuronWeights()[_network_layers[layer].layerNeurons[n].returnNeuronNumber()] >= 0);

               // pseudo code for n_sum = n_sum + (previous layer neuron output value) * (previous layer neuron weight to THIS neurons on the hidden layer/output layer)
               
                n_sum = n_sum + (previous_layer.layerNeurons[prev].returnNeuronOutputValue())*(previous_layer.layerNeurons[prev].returnNeuronWeights()[_network_layers[layer].layerNeurons[n].returnNeuronNumber()]);               

           }
           // Set neurons output value to output of transfer function          
           _network_layers[layer].layerNeurons[n].setNeuronOutputValue(transferFunction(n_sum));

            cout<< "\t- Layer " << layer << " neuron: " <<_network_layers[layer].layerNeurons[n].returnNeuronNumber()<< " has output value: " << _network_layers[layer].layerNeurons[n].returnNeuronOutputValue() << endl;
            
        }

    }
    cout << "******** Program has ended with all neurons updated ********"<< "\n";
}

/*
A transfer function returns the hyperbolic tan of the neurons sum of inputs. This is to smooth the neurons output value. 
*/
double neuralNetwork::transferFunction(double sum)
{
    if (tanh(sum) < 0.01)
    {
        cout << "Input values into the network were incorrect, please retry using double values eg 1.2" << endl;
        
    } 
    return tanh(sum);
}
