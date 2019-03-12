/*
  ==============================================================================

    Delay.h
    Created: 11 Mar 2019 6:38:45pm
    Author:  Chris Yeoward

  ==============================================================================
*/

#pragma once

#ifndef DELAY_H_
#include <math.h>
#include <string.h>
#include "Constants.h"

namespace SDN {
	class Delay
	{
		
		//private difference eq member properties
		private:
			float* buffer;
			int bufferLength;
			int delayInSamples;
			int readPointer, writePointer;
		

		public:
			float process(float inputSample);
			void write(float sample);
			float read();
		
			Delay(int d);
			Delay(float sampleRate, float d);
			~Delay() {}
	};
}

#endif /* DELAY_H_ */
