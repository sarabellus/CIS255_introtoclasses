#include<iostream>
#include<string>

using namespace std;

class student
{
public:
	void fName(string fn);
	string fName();

	void lName(string ln);
	string lName();

	void GPA(float gpa);
	float Gpa();

	void creditsTaken(float credits);
	float Credits();

	void studentStanding(string stand);
	string standing();

private:
	string p_fn, p_ln, p_st,
		float 
};