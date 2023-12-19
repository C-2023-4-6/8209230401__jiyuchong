#include<iostream>
using namespace std;

class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void CinCuboid(double l, double w, double h) {
		length = l;
		width = w;
		height = h;
	}
	void PrintCuboidVolume() {
		cout << "长方体的体积为:" << length * width * height << endl;
	}
};

int main() {
	Cuboid C[3];
	double l, w, h;
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "个长方体的长宽高:" << endl;
		cin >> l >> w >> h;
		C[i].CinCuboid(l, w, h);
		C[i].PrintCuboidVolume();
		l = 0;
		w = 0;
		h = 0;
	}

}