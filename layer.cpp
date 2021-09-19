#include <iostream>
#include <vector>
#include "neural_network.h"
#include "neuron.h"
#include "layer.h"

using namespace std;

void Layer::addNeuronToLayer(Neuron n)
{
    //cout << "Adding the neuron to the layer"<< "\n";
    layerNeurons.push_back(n);
    _neurons_on_layer = _neurons_on_layer + 1;

}

vector<Neuron> Layer::returnNeuronsOnLayer()
{
    return layerNeurons;
}


