/*
  ==============================================================================

    Terminal.h
    Created: 15 Mar 2019 5:00:32pm
    Author:  Chris Yeoward

  ==============================================================================
*/

#pragma once
#include "Delay.h"

namespace SDN {
    class Terminal
    {
		private:
        	SDN::Delay* readDelay;
        	SDN::Delay* writeDelay;
		public:
			void write(float sample);
			float read();
		
		Terminal() {};
		Terminal(SDN::Delay* readDelay, SDN::Delay* writeDelay);
		~Terminal() {};
	};
}
