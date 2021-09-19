#include <iostream>
#include <vector>
#include "layer.h"
#include "neural_network.h"
#include <fstream>




using std::vector;
using std::cout;

using namespace std;



int main()
{
    

     
    // There are 3 layers in this neural network here we are declaring variables
    int num_input_layer;            
    int num_hidden_layer;
    int num_output_layer;
    vector<int> frame;
    double user_input;

    // The user will determine the number of neurons on each layer of the network
    cout << "******** This program will initialise a 3 layer nerual network of your choice ********" << endl;
    cout << "Please enter the number of neurons you would like on the input layer: ";
    cin >> num_input_layer;
    cout << "Please enter the number of neurons you would like on the hidden (middle) layer: ";
    cin >> num_hidden_layer;
    cout << "Please enter the number of neurons you would like on the output layer: ";
    cin >> num_output_layer;

    // Constructing the frame which is a vector of ints containing the desired size of each layer in the network
    frame.push_back(num_input_layer);
    frame.push_back(num_hidden_layer);
    frame.push_back(num_output_layer);

    // Constructing the inputValues variable which will be populated from the user
    vector<double> inputValues;

    for (int i=0; i< num_input_layer; ++i)
    {
        cout << "Please enter the value (as a double e.g. 1.0) you would like to assign to neuron " << i << " of the input layer" << endl;
        cin >> user_input;
        inputValues.push_back(user_input);
    }
    
    // With the info given by the user, now create a neuralNetwork object
    neuralNetwork network(frame);

    // Once the neural network is constructed we will force input values into input neurons and then throughout the network
    network.feedForward(inputValues);

    

    return 0;
}

