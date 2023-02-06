#pragma once
#include <iostream>

class TBox {
	double lenght;
	double width;
	double height;

public:
	TBox() {
		lenght = 0;
		width = 0;
		height = 0;
	}
	TBox(double l, double w, double h) {
		lenght = l;
		width = w;
		height = h;
	}
	TBox(const TBox& source) {
		lenght = source.lenght;
		width = source.width;
		height = source.height;
	}
	double getLenght() {
		return lenght;
	}
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
	void setLenght(int l) {
		lenght = l;
	}
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	double volume() {
		return lenght * width * height;
	}
	int box_fit(TBox instance);
	void print();
};