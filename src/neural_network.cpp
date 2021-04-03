#include "../include/N3rdNEAT/neural_network.h"
#include "../include/N3rdNEAT/node.h"
#include "../include/N3rdNEAT/connector.h"

#include <cstdlib>
#include <iostream>

NeuralNetwork::NeuralNetwork(int input, int output) {
	inputNodeCount = input;
	outputNodeCount = output;
	for(int i = 0; i < input; i++) {
		nodes.push_back(new Node(0));
	}
	for(int i = 0; i < output; i++) {
		nodes.push_back(new Node(100));
	}
	std::random_device dev;
	randGen = std::minstd_rand(dev());
}

NeuralNetwork::NeuralNetwork() {
	inputNodeCount = 3;
	outputNodeCount = 3;
}

NeuralNetwork::~NeuralNetwork() {
}

void NeuralNetwork::calc(double* input, double* output) {
	if(input==nullptr || output == nullptr) {
		std::__throw_invalid_argument("ERROR: argument of NeuralNetwork::calc was nullptr");
	}
	for(int i= 0; i < inputNodeCount; i++) {
		nodes[i]->val = input[i];
	}
	std::cout << "LOG: Error checking complete, loaded input values\n";;
	for(int i = inputNodeCount; i < inputNodeCount + outputNodeCount; i++) {
		nodes[i]->calc();
	}
	std::cout << "LOG: Calculation complete\n";
	for(int i = 0; i < outputNodeCount; i++) {
		output[i] = nodes[i+inputNodeCount]->getVal();
	}
	std::cout << "LOG: Loaded output\n";
	for(int i = 0; i < inputNodeCount+outputNodeCount; i++) {
		nodes[i]->updated = 0;
	}
}

int NeuralNetwork::mutate() {
	std::cout << "LOG: Started neural_network mutate\n";
	int action = rand()%2;
	Node node;
	switch (action) {
		case 0: {
				//Add a Node (on an existing connection)
				break;
			}
		case 1: {
				//Add a Connection between existing Nodes, if it exists modify its weight
				int i1, i2;
				do {
					i1 = rand()%nodes.size();
					i2 = rand()%nodes.size();
				} while( nodes[i1]->generation == nodes[i2]->generation);
				if(nodes[i1]->generation > nodes[i2]->generation) {
					int tmp = i1;
					i1 = i2;
					i2 = tmp;
				}
				int index=-1;
				for(int i = 0; i < nodes[i1]->to.size(); i++) {
					if(nodes[i1]->to[i]->getTo() == nodes[i2]) {
						index = i;
						break;
					}
				}
				if(index == -1) {
					std::uniform_int_distribution<> distrib(0, 100);
					Connector* tmp = (Connector*)std::malloc(sizeof(Connector));
					*tmp = Connector(nodes[i1], nodes[i2], (float(distrib(randGen))/100.0) * 20.0 - 10.0);
					std::cout << "LOG: new connection has weight: " << tmp->weight << "\n";
					connectors.push_back(tmp);
					nodes[i1]->addToConnector(tmp);
					nodes[i2]->addFromConnector(tmp);
				}
				else {
					std::uniform_int_distribution<> distrib(0, 100);
					connectors[index]->weight = connectors[index]->weight + (float(distrib(randGen))/float(100)) * 4.0 - 2.0;
				}
				break;
			}
	}
	std::cout << "LOG: Ended neural_network mutate\n";
	return 0;

}
