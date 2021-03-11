#include "../include/N3rdNEAT/connector.h"
#include "../include/N3rdNEAT/node.h"

Connector::Connector() {
  from = nullptr;
  to = nullptr;
  weight = 1;
}

Connector::Connector(Node* fromNode, Node* toNode, double connectionWeight) {
  from = fromNode;
  to = toNode;
  weight = connectionWeight;
}
