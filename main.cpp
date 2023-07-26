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
    string name;
    int age;
    string characterstics;

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
class Devloper:Employee
{
public:
    string Favprogrammnerlanguage1;
    Devloper(string name, int age, string characterstics,
             string Favprogrammnerlanguage) : Employee(name, age, characterstics) {

            Favprogrammnerlanguage1=Favprogrammnerlanguage;

    }
    void Fixbug()
    {
        cout<<"okay"<<endl;
    }
};
int main()
{
    Employee it=Employee("Eleven",19,"good");
    it.overall();
    it.setName("NOBO");
    cout<<it.getname()<<endl;
    it.setAge(69);
    cout<< it.getAge()<<endl;
    it.AskForPromotion();
    AbstractEmployee *it2;
    it2 = new Employee("Ashik", 19, "good");
    it2->AskForPromotion();
    delete(it2);
}

