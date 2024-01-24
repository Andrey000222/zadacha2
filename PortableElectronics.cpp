#include"PortableElectronics.h"
#include"HomeAppliances.h"
PortableElectronics::PortableElectronics(int _size_batory) :size_batory(_size_batory) {};
void PortableElectronics::Show() {
	std::cout << size_batory << std::endl;
};
SmartSpeaker::SmartSpeaker(int _size_batory, int _moch) :PortableElectronics(_size_batory), HomeAppliances(_moch) {};
void SmartSpeaker::Show() {
	std::cout <<"размер батареи - " << size_batory << " потребляемая энергия - " << moch << std::endl;
};
PowerBank::PowerBank(int _size_batory, std::string _color) :PortableElectronics(_size_batory), color(_color) {};
void PowerBank::Show() {
	std::cout << "размер батареи - " << size_batory << " цвет - " << color << std::endl;
};