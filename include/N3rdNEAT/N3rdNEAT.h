#ifndef N3RDNEAT_N3RDNEAT_H
#define N3RDNEAT_N3RDNEAT_H

#include "neural_network.h"
#include <Godot.hpp>
#include <Array.hpp>
#include <Sprite.hpp>

namespace godot {
	class N3rdNEAT : public Sprite{
		private:
			GODOT_CLASS(N3rdNEAT, Sprite);
			n3neat::NeuralNetwork network;
		public:
			static void _register_methods();
			void _init();
			void _process();

			N3rdNEAT();
			~N3rdNEAT();

			void mutate();
			Array calc(Array input);
			int inputCount;
			int outputCount;
	};
}


#endif
