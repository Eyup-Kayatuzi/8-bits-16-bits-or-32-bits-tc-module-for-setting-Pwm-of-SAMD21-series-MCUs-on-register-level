//////////////////////////////////////////////////////////////////////////
// Include and defines
//////////////////////////////////////////////////////////////////////////
#include "sam.h"
#include "definitions.h"
#include "app.h"

//////////////////////////////////////////////////////////////////////////
// Function Prototypes
//////////////////////////////////////////////////////////////////////////
void ClocksInit(void);	// Configure Clock, Wait States and synch, bus clocks for 48MHz operation

int main(void)
{
	// CMSIS compliant function not used
	//SystemInit();
	
	// Application hardware and software initialization 
	AppInit();
	/*
	// this is normal pwm pb08
	TC4->COUNT8.CTRLA.bit.ENABLE = 0;
	TC4->COUNT8.CTRLA.bit.MODE = 0x1; // Counter in 8-bit mode
	TC4->COUNT8.CTRLA.bit.WAVEGEN = 0x2;
	TC4->COUNT8.CTRLBSET.bit.ONESHOT = 0; // continue
	TC4->COUNT8.CTRLBSET.bit.DIR = 0; // if 0 is counting up, 1 is counting down
	TC4->COUNT8.PER.reg = 255; // it is adjusting of top value
	TC4->COUNT8.CC[0].reg = 127;
	TC4->COUNT8.CTRLA.bit.ENABLE = 1;
	*/
	
	// this is match pwm pb09 this is only for wo[1]
	TC4->COUNT16.CTRLA.bit.ENABLE = 0;
	TC4->COUNT16.CTRLA.bit.WAVEGEN = 0x3;
	TC4->COUNT16.CTRLBSET.bit.ONESHOT = 0; // continue
	TC4->COUNT16.CTRLBSET.bit.DIR = 0;
	TC4->COUNT16.CC[0].reg = 65535;
	TC4->COUNT16.CC[1].reg = 16383;
	TC4->COUNT16.CTRLA.bit.ENABLE = 1;
	
	 /*
	// this is match pwm pb09 this is only for wo[1]
	TC4->COUNT32.CTRLA.bit.ENABLE = 0;
	TC4->COUNT32.CTRLA.bit.MODE = 0x2;
	TC4->COUNT32.CTRLA.bit.WAVEGEN = 0x3;
	TC4->COUNT32.CTRLBSET.bit.ONESHOT = 0; // continue
	TC4->COUNT32.CTRLBSET.bit.DIR = 0;
	TC4->COUNT32.CC[0].reg = 262144 - 1;
	TC4->COUNT32.CC[1].reg = 131072 - 1;
	TC4->COUNT32.CTRLA.bit.ENABLE = 1;
	*/
	// Super loop
	while(1)
	{
		
	}
} // main()




