#include "../include/N3rdNEAT/N3rdNEAT.h"
#include <cstdlib>
#include "core/class_db.h"


void N3rdNEAT::_bind_methods() {
	ClassDB::bind_method(D_METHOD("calc", "input"), &N3rdNEAT::calc);
	ClassDB::bind_method(D_METHOD("mutate"), &N3rdNEAT::mutate);
	ClassDB::bind_method(D_METHOD("setSize", "input", "output"), &N3rdNEAT::setSize);

}

PoolVector<double> N3rdNEAT::calc(PoolVector<double> input) {
	if(inputCount != input.size()) {
		ERR_PRINT_ONCE("Passed wrong size PoolVector to N3rdNEAT.mutate()");

	}
	PoolVector<double> output;
	output.resize(outputCount);
	double* in = (double*)std::calloc(inputCount, sizeof(double));
	double* out = (double*)std::calloc(inputCount, sizeof(double));
	for(int i = 0; i < inputCount; i++) {
		in[i] = input[i];
	}
	network.calc(in, out);
	for(int i = 0; i < outputCount; i++) {
		output.set(i, out[i]);
	}
	return output;
}

void N3rdNEAT::mutate() {
	network.mutate();
}

void N3rdNEAT::setSize(int input, int output) {
	inputCount = input;
	outputCount = output;
	network = NeuralNetwork(input, output);
}

N3rdNEAT::N3rdNEAT() {
	inputCount = 1;
	outputCount = 1;
	network = NeuralNetwork(1, 1);
}
