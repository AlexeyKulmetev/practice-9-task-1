#include "TBox.h"

int TBox::box_fit(TBox instance) {
	int res;
	if (instance.getLenght() > lenght || instance.getWidth() > width ||
		instance.getHeight() > height)
		return 0;
	return std::trunc(lenght / instance.lenght) * std::trunc(width / instance.width)
		* std::trunc(height / instance.height);
}
void TBox::print() {
	std::cout << "Length = " << lenght << std::endl;
	std::cout << "width = " << width << std::endl;
	std::cout << "height = " << height << std::endl;
}