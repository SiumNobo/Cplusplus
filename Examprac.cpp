#include<iostream>
using namespace std;
class circle
{
private:
    float radius;

public:
    circle(float radius)
    {
        this->radius=radius;
    }
    void setradius(float radius)
    {
        this->radius=radius;
    }
    int getradius()
    {
        return radius;
    }
    void Area(float radius)
    {
        cout<<"Area"<<3.1416*radius*radius<<endl;
    }

};
class circlethree:public circle
{

};

int main()
{

}