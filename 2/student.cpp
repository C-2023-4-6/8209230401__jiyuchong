#include <iostream>
#include"student.h" 
using namespace std;
void Student::display()
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}

void Student::set_value(int num_, const char* name_, char sex_) {
    num = num_;
    for (int i = 0; i < 20; i++) {
        name[i] = name_[i];
    }
    sex = sex_;
}