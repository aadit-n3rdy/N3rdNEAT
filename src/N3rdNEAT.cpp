#include "../include/N3rdNEAT/N3rdNEAT.h"
#include <cstdlib>
#include <Ref.hpp>
#include <PoolArrays.hpp>

void godot::N3rdNEAT::_init() {
	network = n3neat::NeuralNetwork(inputCount, outputCount);
}

void godot::N3rdNEAT::_process() {
}

godot::Array godot::N3rdNEAT::calc(godot::Array input) {
	//godot::Ref<double> output= godot::memnew_arr(double, outputCount);
	std::vector<double> outputVec(outputCount);
	std::vector<double> inputVec(inputCount);
	godot::PoolRealArray inputPool;
	for(int i = 0; i < inputCount; i++) {
		inputPool.append(input[i]);
		inputVec[i] = input[i];
	}
	godot::Array ret;
	network.calc(&inputVec[0], &outputVec[0]);
	//network.calc(inputPool. output.ptr());
	godot::Array outputArr;
	for(int i = 0; i < outputCount; i++) {
		//outputArr.append(output.ptr()[i]);
		outputArr.append(real_t(outputVec[i]));
	}
	return outputArr.duplicate();
}

void godot::N3rdNEAT::mutate() {
	network.mutate();
}

void godot::N3rdNEAT::_register_methods() {
	godot::register_method("_process", &godot::N3rdNEAT::_process);
	godot::register_method("calc", &godot::N3rdNEAT::calc);
	godot::register_method("mutate", &godot::N3rdNEAT::mutate);
}
