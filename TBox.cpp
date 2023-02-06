#include "TBox.h"

int TBox::box_fit(TBox instance) {
	int res;
	if (instance.getLenght() > lenght || instance.getWidth() > width ||
		instance.getHeight() > height)
		return 0;
	
	return (int)(lenght / instance.lenght) * (int)(width / instance.width) *
		(int)(height / instance.height);
}
void TBox::print() {
	std::cout << "Length = " << lenght << std::endl;
	std::cout << "width = " << width << std::endl;
	std::cout << "height = " << height << std::endl;
}