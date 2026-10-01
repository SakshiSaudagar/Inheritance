#include <iostream>
using namespace std;
//Multiple inheritance and drawback
class Pet_Animal
{ 
    protected:
    int eyes;
    public:
    Pet_Animal(){
        cout<<"pet animal const calling"<<endl;
    }

    ~Pet_Animal(){
        cout<<"pet animal deconst calling"<<endl;
    };

    void four_legs(){
        cout<<"pet animal function calling"<<endl;
    }
};
class Wild_Animal
{
    protected:
    int age;
    public:
    Wild_Animal(){
        cout<<"wild animal const called"<<endl;
    }

    ~Wild_Animal(){
        cout<<"wild animal deconst called"<<endl;

    };
    void four_legs(){
        cout<<"wild animal function calling"<<endl;
    }
};
class Animal:public Pet_Animal,public Wild_Animal
{
    public:
    Animal(){
        cout<<"Animal cosnt called"<<endl;
    }
    ~Animal(){
        cout<<"Animal deconst called"<<endl;
    }
    void sound(){
        cout<<"generic Animal sound"<<endl;
    }
};
int main()
{
    Animal arr[5];
    Animal *ptr;
    ptr=&arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(arr)<<endl;
     cout<<"__________________________"<<endl;
    for(int i=0;i<5;i++)
        ptr[i].sound();
    cout<<"__________________________"<<endl;
    for(int i = 0; i < 5; i++)
    {
        (ptr+i)->sound();
    }
     cout<<"__________________________"<<endl;
     for(int i = 0; i < 5; i++)
    {
        (arr+i)->sound();
    }
    return 0;
}