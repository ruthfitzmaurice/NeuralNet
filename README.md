# Udacity CPP Nanodegree Capstone Project

## Three Layer Neural Network Initializer Program

### Overview

The git repo contains my project for the Udacity C++ Nanodegree Program. For this project I have created the framework for a nerual network. The program gets user input which decides the dimensions of the network i.e. how many neurons will exist on the input, hidden (middle) and output layer. User input is also needed to determine the input values that the users wants to feed into the input layer neurons. The program will then continue to create multiple types of objects: a single neural network, multiple layers and multiple neurons. The program also connects all neurons together in a highly connected way i.e each neuron on layer[i] gets is being fed from all neurons on layer[i-1] including a bias neuron. 

After initialising the network, the program calls the feed forward method to update neurons output values depending on their position in the network and the neurons feeding into them. 

The feedForward method is used to propogate input values into a network through the full network (i.e. each neuron) in one direction only. 
Data starts at the input layer and is forced into the input layer neurons, this is the first stage whereby the neurons have no processing power (the input layer neurons output value = input value).
The data from the input layer neuron outputs is then propogated into the hidden layer neurons. This is the second stage of the feedforward method.


In the second stage, neurons on the hidden and output layer have to do some processing. There are two stages in the non-input layer processing: 

1. Calculate the equivalent input on each neuron port using the standard equation : input value on that port (coming from previous layer neuron) * weight on that port
2. Calculate a sum of all weighted inputs including the bias neuron. The psuedo code for this calculation can be seen below: 
    `pseudo code for n_sum = n_sum + (previous layer neuron output value) * (previous layer neuron weight to THIS neurons on the hidden layer/output layer)`
               
3. Send this sum into a transfer function method, here we are using the standard tanh method. This is use to shape the neurons output. 
4. Neuron takes the value outputted by the transfer function and updates its output value

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

`cmake .` \
`make`\

- An executable called NeuralNet is created in the currect directory and can be ran using:

`./NeuralNet` \

- The executeable will then ask the user for information on network dimensions. Enter integer value and press enter, eg:

`******** This program will initialise a 3 layer nerual network of your choice ********`\
`Please enter the number of neurons you would like on the input layer: `3\
`Please enter the number of neurons you would like on the hidden (middle) layer: `2\
`Please enter the number of neurons you would like on the output layer: `1\


- The executeable will then as the user for input values for the input layer neurons. Enter as a DOUBLE and press enter, eg: 

`Please enter the value (as a double e.g. 1.0) you would like to assign to neuron 0 of the input layer`\
1.2
`Please enter the value (as a double e.g. 1.0) you would like to assign to neuron 1 of the input layer`\
1.4

- The executeable will then print out status updates as objects are created, eg when initialising a network :

`******** Initializing a neural network ********`\
       `Making layer: 0`\
        `- Making neuron 0 on layer 0`\
        `- Making neuron 1 on layer 0`\
        `- Making neuron 2 on layer 0`\
        `Making layer: 1`\
        `- Making neuron 0 on layer 1`\
        `- Making neuron 1 on layer 1`\
        `Making layer: 2`\
        `- Making neuron 0 on layer 2`\
        `- Making neuron 1 on layer 2`\
        `- Making neuron 2 on layer 2`\

- The executeable will also print out status updates as the feedforward method occurs eg:\

`******** Starting Feedforward Method ********`\
        `Setting input layer neurons output values `\
        `- Layer 0 neuron: 0 has output value: 1.2`\
        `- Layer 0 neuron: 1 has output value: 1.4`\
        `Setting hidden/output layer neurons output values `\
        `- Layer 1 neuron: 0 has output value: 0.182108`\
        `- Layer 2 neuron: 0 has output value: 0.0833302`\
        `- Layer 2 neuron: 1 has output value: 0.096718`\
`******** Program has ended with all neurons updated ********`\

### Rubric

__README (All Rubric Points REQUIRED)__

|DONE | CRITERIA | MEETS SPECIFICATIONS| WHERE |
|-- | -- | --| -- |
| :heavy_check_mark: | A README with instructions is included with the project |The README is included with the project and has instructions for building/running the project. If any additional libraries are needed to run the project, these are indicated with cross-platform installation instructions. You can submit your writeup as markdown or pdf.| |
| :heavy_check_mark: | The README indicates which project is chosen. | The README describes the project you have built. The README also indicates the file and class structure, along with the expected behavior or output of the program. | |
| :heavy_check_mark: | The README includes information about each rubric point addressed. | The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed. | |

__Compiling and Testing (All Rubric Points REQUIRED)__

|DONE | CRITERIA | MEETS SPECIFICATIONS| WHERE |
|-- | -- | --| -- |
| :heavy_check_mark: | The submission must compile and run. | The project code must compile and run without errors. We strongly recommend using cmake and make, as provided in the starter repos. If you choose another build system, the code must compile on any reviewer platform. |

__Loops, Functions, I/O__

|DONE | CRITERIA | MEETS SPECIFICATIONS| WHERE |
|-- | -- | --| -- |
| :heavy_check_mark: | The project demonstrates an understanding of C++ functions and control structures.| A variety of control structures are used in the project. The project code is clearly organized into functions.| 4 .cpp files (main.cpp, neural_network.cpp, layer.cpp, neuron.cpp) use functions and control loops for functionality.|
| :heavy_check_mark: | The project accepts user input and processes the input.|The project accepts input from a user as part of the necessary operation of the program.|  The user is asked for input in main.cpp which determines the dimensions of the neural network being created. |

__Object Oriented Programming__

|DONE | CRITERIA | MEETS SPECIFICATIONS| WHERE |
|-- | -- | --| -- |
| :heavy_check_mark: | The project uses Object Oriented Programming techniques. | The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. | Each .cpp and .h file use Object Oreinted Programming concepts such as classes and member variables/methods. |
| :heavy_check_mark: | Classes use appropriate access specifiers for class members. | All class data members are explicitly specified as public, protected, or private.| All files in this project use appropriate public and private accessors. |
| :heavy_check_mark: | Class constructors utilize member initialization lists. | All class members that are set to argument values are initialized through member initialization lists.| All class constructors in .h files construct member values |
| :heavy_check_mark: | Classes abstract implementation details from their interfaces. | All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.| All .cpp files and .h files contain member functions names which are descriptive and explanation its purpose in the program. |
| :heavy_check_mark: | Classes encapsulate behavior. | Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.| All .cpp and .h files show objects are encapsulated|
| 