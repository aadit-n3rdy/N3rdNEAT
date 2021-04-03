#pragma once

#include <vector>
#include <random>

class Connector;
class Node;

class NeuralNetwork {
	private:
		std::vector<Node *> nodes;
		std::vector<Connector *> connectors;
		Node *inputNodes;
		Node *outputNodes;
		int inputNodeCount;
		int outputNodeCount;
		std::minstd_rand randGen;

	public:
		NeuralNetwork(int input, int output);
		NeuralNetwork();
		~NeuralNetwork();
		void calc(double* input, double* output);
		int mutate();
};
