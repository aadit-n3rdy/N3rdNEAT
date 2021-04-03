#ifndef N3RDNEAT_N3RDNEAT_H
#define N3RDNEAT_N3RDNEAT_H

#include "core/object.h"
#include "core/pool_vector.h"
#include "core/typedefs.h"
#include "neural_network.h"

class N3rdNEAT : public Object {
	private:
		GDCLASS(N3rdNEAT, Object);
		int inputCount, outputCount;
		NeuralNetwork network;
	protected:
		static void _bind_methods();
	public:
		N3rdNEAT();
		PoolVector<double> calc(PoolVector<double> input);
		void mutate();
		void setSize(int input, int output);
};

#endif
