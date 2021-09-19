#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
#include <fstream>
#include "layer.h"

using std::string;
using std::cout;
using namespace std;


class neuralNetwork {
  public:
    neuralNetwork(vector<int> frame) {    // This is the neuralNetwork constructor and takes the user defined frame variable
    _numInLayer = frame[0];
    _numHiddenLayer = frame[1];
    _numOutLayer = frame[2];
    _frame = frame;

    assert(_numInLayer > 0 && _numHiddenLayer > 0 && _numOutLayer > 0); // Error checking that the user defined variables are valid
    
    // Now that the size of the nerual network makes sense we want to initialize the network by calling the method from within the constructor
    initializeNeuralNetwork();

    }
    void feedForward(vector<double> &inputValues);
    void initializeNeuralNetwork();
    double transferFunction(double sum);
    
    vector<int> neurons_per_layer;
    vector<Layer> _network_layers;


    // The variables do not need to be accessed outside of
  // functions from this class, so we can set them to private.
  private:
    int _numInLayer; 
    int _numHiddenLayer;
    int _numOutLayer;
    vector<int> _frame;
    
    

};



#endif