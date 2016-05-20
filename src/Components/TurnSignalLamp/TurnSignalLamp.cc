#include <iostream>

#include "TurnSignalLamp.h"
using namespace std;

TurnSignalLamp::TurnSignalLamp():
leftTurnSignalLamp(false),
rightTurnSignalLamp(false),
headLamp(false),
reversingLamp(false)
{

}

void TurnSignalLamp::setLeftTurnSignalLamp(bool onOff)
{
	this->leftTurnSignalLamp = onOff;
}

void TurnSignalLamp::setRightTurnSignalLamp(bool onOff)
{
	this->rightTurnSignalLamp = onOff;
}

void TurnSignalLamp::setHeadLamp(bool onOff)
{
	this->headLamp = onOff;
}

void TurnSignalLamp::setReversingLamp(bool onOff)
{
	this->reversingLamp = onOff;
}

void TurnSignalLamp::dumpAllLampState(void)
{
	cout<<"leftTurnLamp :"<<this->leftTurnSignalLamp<<endl;
	cout<<"rightTurnLamp:"<<this->rightTurnSignalLamp<<endl;
	cout<<"headLamp     :"<<this->headLamp<<endl;
	cout<<"reversingLamp:"<<this->reversingLamp<<endl;
}

void TurnSignalLamp::getAllLampState(void)
{
	dumpAllLampState();
}

