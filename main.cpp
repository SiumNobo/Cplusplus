#include<iostream>
using namespace std;
class AbstractEmployee
{
public:
    virtual void AskForPromotion()=0;
};
class Employee:public AbstractEmployee
{
private:
    int age;
    string characterstics;
protected:
    string name;

public:


    void setName(string Name)
    {
        name= Name;
    }
    string getname()
    {
        return name;
    }
    void setAge(int Age)
    {
        if(Age>=18)
        {
            age=Age;
        }
    }
    int getAge()
    {
        return age;
    }
    Employee(string name, int age, string characterstics ) {
        this->name = name;
        this->age=age;
        this->characterstics=characterstics;
    }


    void overall()
    {
        cout<<name<<" "<<age<<" "<<characterstics<<endl;

    }
    void AskForPromotion()
    {
        if(age>=35)
        {
            cout<<"Promoted"<<endl;
        }
        else
        {
            cout<<"not promoted"<<endl;
        }
    }

};
class Devloper:public Employee
{
public:
    string Favprogrammnerlanguage1;
    Devloper(string name, int age, string characterstics,
             string Favprogrammnerlanguage) : Employee(name, age, characterstics) {

            Favprogrammnerlanguage1=Favprogrammnerlanguage;

    }
    void Fixbug()
    {
        cout<<name<<"Fixed bug using"<<Favprogrammnerlanguage1<<endl;
    }
};


class teacher:public Employee
{
public:
    string favteacher1;

public:
    teacher(string name, int age, string characterstics,
            string favteacher) : Employee(name, age, characterstics) {

        favteacher1=favteacher;

    }
    void printx()
    {
        cout<<getname()<<" Favteacher-- "<<favteacher1<<endl;
    }


};

int main()
{
    Devloper d=Devloper("Saldina ",29," Good "," c++");
    d.Fixbug();
    d.AskForPromotion();
    teacher t=teacher("Hama",29,"Good","Gama");
    t.printx();


}

