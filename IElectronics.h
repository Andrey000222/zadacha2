#pragma once
#include <iostream>
#include <string>
class IElectronics {
public:
	virtual ~IElectronics() {};
	virtual void Show() = 0;
};