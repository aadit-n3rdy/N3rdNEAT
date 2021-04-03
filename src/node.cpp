#include "../include//N3rdNEAT/node.h"
#include <exception>
#include <list>
#include <vector>
#include <iostream>
#include "../include/N3rdNEAT/connector.h"
#include <cmath>

double Node::sigmoid(double input) {
	input = std::exp(input);
	return input/(std::abs(input)+(double)1);
}


Node::Node() {
	val = 0;
	from = std::vector<Connector *>();
	to = std::vector<Connector *>();
	generation=0;
}

Node::Node(double gen) {
	val = 0;
	from = std::vector<Connector *>();
	to = std::vector<Connector *>();
	generation = gen;
}

void Node::removeFromConnector(Connector* connector) {
	int len = from.size();
	int index = 0;
	bool end = false;
	for(int i = 0; (i < len) && !end; i++) {
		if(from[i] == connector) {
			index = i;
			end = true;
		}
	}
	if(!end) {
		std::cout << "ERROR: Attempted remove of disconnected from connector\n";
	}
	else {
		from.erase(from.begin() + index);
	}
}

void Node::removeToConnector(Connector* connector) {
	int len = to.size();
	int index = 0;
	bool end = false;
	for(int i = 0; (i < len) && !end; i++) {
		if(to[i] == connector) {
			index = i;
			end = true;
		}
	}
	if(!end) {
		std::cout << "ERROR: Attempted remove of disconnected to connector";
	}
	else {
		to.erase(to.begin() + index);
	}
}
void Node::calc() {
	if(updated == 0) {
		updated = 1;
		if(generation == 0) {
			std::cerr << "ERROR Trying to calculate for input node, this shudnt be happening\n";
		}
		std::cout << "LOG: Starting node calculation\n";
		int fromLen = from.size();
		std::cout << "LOG: fromLen is " << fromLen << "\n";
		if(fromLen > 0) {
			std::cout << "LOG: fromLen is > 0 but may not be able to index from\n";
			try {
				std::cout << "LOG: Inside try" << from.size() <<'\n';
				std::cout << "LOG: " << from.at(0) << "\n";
			} catch(std::out_of_range o) {
				std::cout << "LOG: Inside catch\n";
				std::cout << "LOG: That failed\n";
			}

			Node* temp = nullptr;
			std::cout << "LOG: Starting loop\n";
			if(from[0] == nullptr) {
				std::cout << "ERROR: from[0] is nullptr\n";
			}
			std::cout << "LOG: from[0] is not nullptr\n";
			for(int i = 0; i < fromLen; i++) {
				std::cout << "LOG: index is " << i << '\n';
				temp = from.at(i)->getFrom();
				std::cout << "LOG: set temp  to " << temp << " \n";
				if (temp != nullptr) {
					if(temp->generation != 0 && temp->updated==0) {
						std::cout << "LOG: Calling calc() on temp\n";
						temp->calc();
						std::cout << "LOG: temp calculated\n";
					}
					if(temp->updated == 1) {
						std::__throw_runtime_error("ERROR: CIRCULAR NODE CONNECTION\n");
						std::cout << "ERROR: CIRCULAR NODE CONNECTION FFS\n";
					}
					//fromResults[i] = temp->getVal()*from[i]->getConnectionWeight();
					//TODO: remove next line if multiple node types
					val += temp->getVal()*from[i]->getConnectionWeight();
				}
				else {
					std::cerr << "ERROR: temp is nullptr in Node::calc()\n";
				}
			}
			val = sigmoid(val);
		}
		else {
			val = 0;
		}
		updated = 2;
		std::cout << "LOG: Finished calculatiions, calculating sigmoid and returning\n";
		//TODO: Code to calculate actual value if using multiple node types

	} else {
		std::cout << "LOG: Already updated\n";
	}
}
Node::~Node() {
	int fromLen = from.size();
	int toLen = to.size();
	for(int i = 0; i < fromLen; i++) {
		from[i]->getFrom()->removeToConnector(from[i]);
		//std::free(from[i]);
	}
	for(int i = 0; i < toLen; i++) {
		to[i]->getTo()->removeFromConnector(to[i]);
		std::free(to[i]);
	}
}
