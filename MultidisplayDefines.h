/*
    Copyright 2009-10 Stephan Martin, Dominik Gummel

    This file is part of Multidisplay.

    Multidisplay is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Multidisplay is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Multidisplay.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MULTIDISPLAY_DEFINES_H_
#define MULTIDISPLAY_DEFINES_H_

//----------------------------------------------------------------------------------------------------
//Max Values:
#define MaxAGT 1200            //Maximum AGT
#define MaxOP 8                //Maximum Oilpressure
//----------------------------------------------------------------------------------------------------

//Options:

#define RPM_DEBUG 0             //Little Frequency Generator
#define FREEMEM 0              //Outputs how much free RAM is

#define INITTIME 2000          //How long the Init screen will be shown
#define RPM_SHIFT_LIGHT 1        //Shiftlight?
//--------------------------------------

// Shiftlight Config:

#define RPM_SHIFT_LOW 6000             //Shiftlight half brightness
#define RPM_LOW_BRIGHT 40
#define RPM_SHIFT_HIGH 6500            //Shiftlight full brightness
#define RPM_HIGH_BRIGHT 255
#define RPM_NO_BRIGHT 0                //Shiftlight normal brightness

//--------------------------------------

#define BUTTONHOLD 1000         //ms to trigger a Hold (Every Xms a hold is triggered)
#define SCREENSAVEDELAY 10000	//ms after what it will save the Screen

#define FLASH_TIME 100            //ms the interval when a Limit is exceeded, the LCD will flash with this interval)
#define FLASH_E_TIME 5000          //how long the flash is shown at a minimum

//--------------------------------------
//Pin Config:

//#define SELPIN 10               //Selection Pin (MCP3208)
//#define SELPIN2 17              //Selection Pin (MCP3208_2)
#define DATAOUT 17              //MOSI
#define DATAIN 12               //MISO
#define SPICLOCK 13             //Clock

// The Sensors: (On the MD03 Print, see the Layout for the KLX Connectors)

#define BOOSTPIN 1             //(KL7-2) Currently supports the Motorola 250kpa Sensor
#define BOOST2PIN 2            //(KL7-3) Currently supports the Motorola 250kpa Sensor

#define VDOT1PIN 3             //(KL6) T1 VDO Temperature Pin
#define VDOT2PIN 4             //(KL5) T2 VDO Temperature Pin
#define VDOT3PIN 5             //(KL4) T3 VDO Temperature Pin
#define VDOP1PIN 6             //(KL3) P1 VD0 Pressure Pin
#define VDOP2PIN 7             //(KL2) P1 VD0 Pressure Pin
#define VDOP3PIN 8             //(KL1) P1 VD0 Pressure Pin

#define LAMBDAPIN 11           //(KL9-4) Narrow Band Lambda Sensor Input
#define THROTTLEPIN 12         //(KL9-3) 0-5V Signal from the trothle signal
#define RPMPIN 13              //(KL9-2) needs a small Circuit to converts the RPM Signal into Analog Voltages
#define LMMPIN 14              //(KL9-1)Signal from the LMM


#define CASETEMPPIN 15         //The LM35 Signal.
#define AGTPIN 16              //Input from the Mux

#define BATTERYPIN 0           //The Signal from the voltage divider (Analog Pin on the Arduino!)
#define LCDBRIGHTPIN 5		     //The Pin for the Brightness of the LCD, it will be PWM.
#define RPMSHIFTLIGHTPIN 3           //where is the Shiftlight connected

//--------------------------------------
//Others:

#define LAMBDAMIN 100            //Calibration for Lambda
#define LAMBDAMAX 1100
#define LAMBDALOWERLIMIT 3
#define LAMBDAUPPERLIMIT 15

#define THROTTLEMIN 620            //Calibration for Throttle
#define THROTTLEMAX 3530

#define RPMFACTOR 2.34              //Calibration for RPM (its 2.34!)
#define RPMSMOOTH 5                 //how many readings will be taken for the smoothing (5 is quick and smooth, 10 would be supersmooth but its getting slow)
#define RPMMAX 3400                 //its about 8k

#define TEMPTYPKREADINGS 28         //how many entrys are in the Lookup Table
#define NUMTYPK 1                   //how many TypK`s are attached (enter Number -1)
#define MAXTYPK 1170                //over that will be seen as Open.

#define EXPANDER B0100001       // Address with 2 address pins grounded. (from the PCF8574)
#define EXPANDER2 B0100000      // Address with three address pins grounded. (from the PCF8574)

#define DEBUGRPM 10

//temp hack
typedef unsigned char byte;

//serial output
#define SERIALOUT_DISABLED 0
#define SERIALOUT_RAW 1
#define SERIALOUT_ENABLED 2

#define SCREENA 1
#define SCREENB 2

#define SCOPE_BOOST 1
#define SCOPE_LMM 2
#define SCOPE_RPM 3
#define SCOPE_THROTTLE 4
#define SCOPE_LAMBDA 5

#endif /* MULTIDISPLAY_DEFINES_H_ */