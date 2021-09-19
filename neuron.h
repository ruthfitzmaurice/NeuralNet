#ifndef NEURON_H
#define NEURON_H

#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
#include "layer.h"


using std::string;
using std::cout;
using namespace std;


class Neuron {
  public:
    Neuron(int neuron_number, int layer_number,int neuron_ports) {    // This is the Neuron constructor
        
        n_neuron = neuron_number;
        n_layer = layer_number;
        n_ports = neuron_ports;
        
        // A neuron must construct a weights to next layer vector as part of its creation. 
        // The weights to next layer is a random number between 0 and 1 and is used to calculate the weighted input for the neuron which is fed by the currect neuron being created.
        for(int i = 0; i < neuron_ports; ++i){
          double rand_number = (double) rand()/RAND_MAX;
                   
          weights_to_next_layer.push_back(rand_number);

        }


          
    }
    int returnNeuronNumber();
    void setNeuronOutputValue(double value);
    double returnNeuronOutputValue();
    vector<double> returnNeuronWeights();


      


    // The variables do not need to be accessed outside of
  // functions from this class, so we can set them to private.
  private:
    int n_neuron;                           // neuron ID
    int n_layer;                            // Layer ID
    double neuron_output;                   // output values from this neuron
    int n_ports;
    vector<double> weights_to_next_layer;  // Current neuron needs to know the weights for each neuron it is connected to in the next layer.
                                            //  Size of weights_to_next_layer = n_layer + 1 layerNeurons.size()


};



#endif