#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		sec = s;
	}
	~Time() {}
	void printTime() {
		cout<< this->hour << ":" << this->minute << ":" << this->sec << endl;
	}
};
int main()
{
	int h, m, s;
	cin >> h;      //输入设定的时间 
	cin >> m;
	cin >> s;
	Time tl(h, m, s);
	tl.printTime();
	return 0;
}
