#include <iostream>

using namespace std;

class GradStudent : public student
{
public:
    void TApay(float tapay);
    float TApay();
    
    void standing(float p_cr);
    string standing();
    
private:
    float p_tp;
};

void GradStudent::standing(float p_cr)
{
    p_st = "Graduate Student";
}

string GradStudent::standing()
{
    return p_st;
}
void GradStudent::TApay(float tapay)
{
    p_tp = tapay;
}
float GradStudent::TApay()
{
    return p_tp;
}
