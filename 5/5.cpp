#include<iostream>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	~Point() {}
	void setPoint(int i, int j) {
		this->x = x + i;
		this->y = y + j;
	}
	void display() {
		cout << '(' << x << ',' << y << ')' << endl;
	}
};

int main() {
	Point n;
	int i, j;
	cin >> i >> j;
	n.setPoint(i, j);
	n.display();
}