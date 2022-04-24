#pragma once
#include "iElectronics.h"
using namespace std;

class Device : public iElectronics
{
	int _batterylife;
public:
	Device(int _batterylife);
	void Showspec();


};
