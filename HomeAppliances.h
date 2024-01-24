#pragma once
#include"IElectronics.h"
class HomeAppliances :virtual public IElectronics {
public:
	HomeAppliances(int _moch);
	void Show();
protected:
	int moch = 220;
};
class Microwave :public HomeAppliances {
public:
	Microwave(int _moch, std::string _stail);
	void Show();
protected:
	std::string stail;
};
class TV :public Microwave {
public:
	TV(int _moch, std::string _stail, std::string _hp);
	void Show();
private:
	std::string hp;
};