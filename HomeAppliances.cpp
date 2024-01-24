#include"HomeAppliances.h"
HomeAppliances::HomeAppliances(int _moch) :moch(_moch) {};
void HomeAppliances::Show() {
	std::cout << moch << std::endl;
};
Microwave::Microwave(int _moch, std::string _stail) :HomeAppliances(_moch), stail(_stail) {};
void Microwave::Show() {
	std::cout << " потребляемая энергия - " << moch << " стиль - " << stail << std::endl;
};
TV::TV(int _moch, std::string _stail, std::string _hp) :Microwave(_moch, _stail), hp(_hp) {};
void TV::Show() {
	std::cout << " потребляемая энергия - " << moch << " стиль - " << stail << " разрешение - " << hp << std::endl;
};