#pragma once
#include "iElectronics.h"

class Applienc : iElectronics
{
	int weight;
public:
	void ShowSpec() { std::cout << "I am Applienc" << std::endl; };
};