#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(int _batterylife) //�����������
{
	this->_batterylife = _batterylife;
}
void Device::Showspec()
{
	cout << "Battery life: " << _batterylife << endl;
}
