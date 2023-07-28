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
    virtual void Area(float radius)
    {
        cout<<"Area"<<3.1416*radius*radius<<endl;
    }

};
class circlethree:public circle
{
    string circlename3;
public:
circlethree(float radius,string circlename): circle(radius)
    {
          circlename3=circlename;
    }
    void area(float radius)
    {
        cout<<"Area"<<3.1416*radius*radius<<endl;
    }

};

int main()
{

    circle c1=circle(3.16);
    circle c2=circle(5);
    circlethree c3=circlethree(7,"C3");

    circle* cthree=&c3;
    c3.Area(5);

}