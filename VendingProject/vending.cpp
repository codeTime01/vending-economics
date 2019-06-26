/*
  ""Test.h - Test library for Wiring - implementation
  Copyright (c) 2006 John Doe.  All right reserved.""
  Written over and edited: 
  vending.cpp - library for in-house Vending Machine
  First Draft edit Patrick Hoffman 'hatrick' 2019, used in J dcMotorActivate 2019
*/

int motorOne = 5;
int motorTwo = 6;

// include core Wiring API
#include "Arduino.h"

// include this library's description file
#include "vending.h"

// include description files for other libraries used (if any)
#include "HardwareSerial.h"

pinMode(motorOne, OUTPUT);
pinMode(motorTwo, OUTPUT);
pinMode(buttonOne, INPUT_PULLUP);
pinMode(buttonTwo, INPUT_PULLUP);
 
// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances
//
vending::vending(int givenValue)
{
  // initialize this instance's variables
  value = givenValue;

  // do whatever is required to initialize the library
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void vending::Machine(void)
{
  
}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

void vending::doSomething(void)
{
  // eventhough this function is public, it can access
  // and modify this library's private variables
  Serial.print("value is ");
  Serial.println(value);

  // it can also call private functions of this library
  doSomethingSecret();
}

void vending::vend(void)
{
   delay(500);
   analogWrite(motorOne, 200);
   delay(1250);
   analogWrite(motorOne, 0);
}

void vending::retract(void)
{
  delay(500);
  analogWrite(motorOne, 200);
  delay(1250);
  analogWrite(motorOne, 0);
}

// Private Methods /////////////////////////////////////////////////////////////
// Functions only available to other functions in this library

void vending::doSomethingSecret(void)
{
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}
