#include<iostream>
using namespace std;

class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	cin >> h;      //�����趨��ʱ�� 
	cin >> m;
	cin >> s;
	Time tl(h, m, s);
	tl.printTime();
	return 0;
}
