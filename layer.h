#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <assert.h>

#include "neuron.h"

using std::string;
using std::cout;
using namespace std;


class Layer {
  public:
    Layer(int layer_number) {    // This is the Layer constructor
        _layerNum = layer_number;
        cout << "\tMaking layer: "<< _layerNum <<endl;
    }

    vector<Neuron> layerNeurons;

    void addNeuronToLayer(Neuron n);
    int _neurons_on_layer = 0;

    vector<Neuron> returnNeuronsOnLayer();
  
  


    // The variables do not need to be accessed outside of
  // functions from this class, so we can set them to private.
  private:
    int _layerNum;
    


};



#endif