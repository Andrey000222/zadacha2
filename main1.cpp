#include"PortableElectronics.h"
#include"HomeAppliances.h"
int main() {
	setlocale(LC_ALL, "");
	IElectronics* mas[4];
	mas[0] = new PowerBank(50, "red");
	mas[1] = new SmartSpeaker(50, 80);
	mas[2] = new Microwave(150, "rezka");
	mas[3] = new TV(220, "rezka", "4K");
	bool magaz = 1;
	while (magaz == 1) {
		short tap;
		std::cout << std::endl << "повербанк - 1, смарт калонка - 2, свч печь - 3, телевизор - 4, ничего не нужно - 5" << std::endl;
		std::cin >> tap;
		switch (tap)
		{
		case 1: {
			mas[0]->Show();
			break;
		}
		case 2: {
			mas[1]->Show();
			break;
		}
		case 3: {
			mas[2]->Show();
			break;
		}
		case 4: {
			mas[3]->Show();
			break;
		}
		case 5: {
			magaz = 0;
			break;
		}
		default: {
			std::cout << "выберете товар от 1-4" << std::endl;
			break;
		}
		}
	};
	delete mas[0];
	delete mas[1];
	delete mas[2];
	delete mas[3];
	return 0;
}