#ifndef N3RD_NEAT_NODE_H
#define N3RD_NEAT_NODE_H

#include <vector>
class Connector;
class NeuralNetwork;

class Node {
	private:
		std::vector<Connector*> from;
		std::vector<Connector*> to;
		double val;
		unsigned short updated;
		double generation;
		static double sigmoid(double input);
	public:
		Node();
		~Node();
		Node(double gen);
		inline void resetUpdated() { updated=false; }
		inline bool isUpdate() { return updated; }
		void calc();
		inline double getVal() { return val; }
		inline void addFromConnector(Connector* connector) {from.push_back(connector);}
		inline void addToConnector(Connector* connector) {to.push_back(connector);}
		void removeFromConnector(Connector* connector);
		void removeToConnector(Connector* connector);
		inline bool isObsolete() {return (from.size()==0) || (to.size()==0);}
		friend NeuralNetwork;
};

#endif
