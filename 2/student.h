class Student
{
public:
	void display();
	void set_value(int num_,const char* name_,char sex_);
private:
	int num;
	char name[20];
	char sex;
};
