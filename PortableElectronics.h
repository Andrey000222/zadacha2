#pragma once
#include"IElectronics.h"
class PortableElectronics :virtual public IElectronics {
public:
	PortableElectronics(int _size);
	void Show();
protected:
	int size_batory=1000;
};
class SmartSpeaker :public PortableElectronics, public HomeAppliances  {
public:
	SmartSpeaker(int _size_batory, int _moch);
	void Show();
};
class PowerBank :public PortableElectronics {
public:
	PowerBank(int _size_batory, std::string _color);
	void Show();
private:
	std::string color;
};