cmake_minimum_required(VERSION 2.8)
project(NeuralNet)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(NeuralNet main.cpp neural_network.cpp layer.cpp neuron.cpp)
