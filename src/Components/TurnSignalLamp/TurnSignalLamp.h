#ifndef __TURNSIGNALLAMP__
#define __TURNSIGNALLAMP__
class TurnSignalLamp
{
public:
	TurnSignalLamp();
	void setLeftTurnSignalLamp(bool);
	void setRightTurnSignalLamp(bool);
	void setHeadLamp(bool);
	void setReversingLamp(bool);
	void dumpAllLampState(void);
	void getAllLampState(void);
private:
	bool leftTurnSignalLamp;
	bool rightTurnSignalLamp;
	bool headLamp;
	bool reversingLamp;
};

#endif

