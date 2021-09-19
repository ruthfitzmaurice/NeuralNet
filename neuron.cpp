#include <iostream>
#include <vector>
#include "neural_network.h"
#include "neuron.h"


using namespace std;
        
    int Neuron::returnNeuronNumber()
    {
        return n_neuron;
    }

    void Neuron::setNeuronOutputValue(double value)
    {
        //cout << "Value is: " << value << endl;
        neuron_output = value;    
    }


    double Neuron::returnNeuronOutputValue()
    {
        return neuron_output;
        //cout << "Returning the neurons output value" << endl;
    }

    vector<double> Neuron::returnNeuronWeights()
    {
        return weights_to_next_layer;
    }


 
