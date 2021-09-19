# Udacity CPP Nanodegree Capstone Project

## Three Layer Neural Network Initializer Program

### Overview

The git repo contains my project for the Udacity C++ Nanodegree Program. For this project I have created the framework for a nerual network. The program gets user input which decides the dimensions of the network i.e. how many neurons will exist on the input, hidden (middle) and output layer. User input is also needed to determine the input values that the users wants to feed into the input layer neurons. The program will then continue to create multiple types of objects: a single neural network, multiple layers and multiple neurons. After initialising the network, the program will feed forward the input values into the input layer neurons, and the network feedforward method propogates input values throughout the entire network. 

This project does not create a fully functioning neural network i.e. the project does not support functionality for the network to learn from training data. The project creates the framework for a network and then forward propogates input values throughout the network.

The project follows the logic from the following: http://www.millermattson.com/dave/?p=54


### File Structure
This repository contains:
- .cpp files: main.cpp. neural_network.cpp, layer.cpp and neuron.cpp 
- .h files: neural_network.h, layer.h and neuron.h
- CMakeLists.txt : a cmake configuration file withh all settings needed to run the program
- README.md : This file

### Dependencies for Running Locally
cmake >= 2.8


### Build Instructions

This current repo can be cloned using git clone:

git clone https://github.com/ruthfitzmaurice/NeuralNet.git

Enter the root dir of the project:
 
cp NeuralNet

### How to Run the program

- First run cmake and make from current directory:

`cmake .`
`make`

- An executable called NeuralNet is created in the currect directory and can be ran using:

`./NeuralNet` 

- The executeable will then ask the user for information on network dimensions. Enter integer value and press enter, eg:

`******** This program will initialise a 3 layer nerual network of your choice ********`
`Please enter the number of neurons you would like on the input layer: `3
`Please enter the number of neurons you would like on the hidden (middle) layer: `2
`Please enter the number of neurons you would like on the output layer: `1


- The executeable will then as the user for input values for the input layer neurons. Enter as a DOUBLE and press enter, eg: 

`Please enter the value (as a double e.g. 1.0) you would like to assign to neuron 0 of the input layer`
1.2
`Please enter the value (as a double e.g. 1.0) you would like to assign to neuron 1 of the input layer`
1.4

- The executeable will then print out status updates as objects are created, eg when initialising a network :

`******** Initializing a neural network ********`
       `Making layer: 0`
        `- Making neuron 0 on layer 0`
        `- Making neuron 1 on layer 0`
        `- Making neuron 2 on layer 0`
        `Making layer: 1`
        `- Making neuron 0 on layer 1`
        `- Making neuron 1 on layer 1`
        `Making layer: 2`
        `- Making neuron 0 on layer 2`
        `- Making neuron 1 on layer 2`
        `- Making neuron 2 on layer 2`

- The executeable will also print out status updates as the feedforward method occurs eg:

`******** Starting Feedforward Method ********`
        `Setting input layer neurons output values `
        `- Layer 0 neuron: 0 has output value: 1.2`
        `- Layer 0 neuron: 1 has output value: 1.4`
        `Setting hidden/output layer neurons output values `
        `- Layer 1 neuron: 0 has output value: 0.182108`
        `- Layer 2 neuron: 0 has output value: 0.0833302`
        `- Layer 2 neuron: 1 has output value: 0.096718`
`******** Program has ended with all neurons updated ********`

### Rubric

__README (All Rubric Points REQUIRED)__

|DONE | CRITERIA | MEETS SPECIFICATIONS| `` |
|-- | -- | --| -- |
| :heavy_check_mark: | A README with instructions is included with the project |The README is included with the project and has instructions for building/running the project. If any additional libraries are needed to run the project, these are indicated with cross-platform installation instructions. You can submit your writeup as markdown or pdf.| |
| :heavy_check_mark: | The README indicates which project is chosen. | The README describes the project you have built. The README also indicates the file and class structure, along with the expected behavior or output of the program. | |
| :heavy_check_mark: | The README includes information about each rubric point addressed. | The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed. | |


