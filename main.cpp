#include "TBox.h"
#include <cmath>

int main() {
	TBox mainBox = TBox();
	float tmp;

	std::cout << "Enter length of the main box: ";
	std::cin >> tmp;
	mainBox.setLenght(tmp);
	std::cout << "Enter width of the main box: ";
	std::cin >> tmp;
	mainBox.setWidth(tmp);
	std::cout << "Enter height of the main box: ";
	std::cin >> tmp;
	mainBox.setHeight(tmp);

	std::cout << std::endl;
	mainBox.print();
	std::cout << std::endl;

	TBox smallerBox = TBox();
	std::cout << "Enter length of the smaller box: ";
	std::cin >> tmp;
	smallerBox.setLenght(tmp);
	std::cout << "Enter width of the smaller box: ";
	std::cin >> tmp;
	smallerBox.setWidth(tmp);
	std::cout << "Enter height of the smaller box: ";
	std::cin >> tmp;
	smallerBox.setHeight(tmp);

	std::cout << std::endl;
	std::cout << "The amount of smaller boxes, that will fitt in the main box = " <<
		mainBox.box_fit(smallerBox);
	return 0;
}