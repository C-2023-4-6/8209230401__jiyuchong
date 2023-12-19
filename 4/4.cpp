#include<iostream>
using namespace std;

class Student {
private:
	int ID;
	int score;
public:
	Student(int ID_, int score_) {
		ID = ID_;
		score = score_;
	}
	~Student() {}
	static int max(Student* S,int l) {
		int m=0;
		for (int i = 0; i < l; i++) {
			m = (S[i].score > S[m].score) ? i : m;
		}
		return m+1;
	}
};

int main() {
	Student su[5] = { {1,78},
					  {2,67},
					  {3,97},
					  {4,87},
					  {5,92} };
	cout << Student::max(su, 5);
}