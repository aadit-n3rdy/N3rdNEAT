#include "../include/N3rdNEAT/connector.h"
#include "../include/N3rdNEAT/node.h"

n3neat::Connector::Connector() {
	from = nullptr;
	to = nullptr;
	weight = 1;
}

n3neat::Connector::Connector(Node* fromNode, Node* toNode, double connectionWeight) {
	from = fromNode;
	to = toNode;
	weight = connectionWeight;
}

n3neat::Connector::~Connector() {
}
