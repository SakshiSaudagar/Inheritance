#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    public:
    Person(string n, int a){
        this->name=n;
        this->age=a;
        cout<<"Constructor of Person class called"<<endl;
    }
    ~Person(){
        cout<<"Destructor of Person class called"<<endl;
    }

    void persondisplay(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
};
//Single Inheritance
class employee: public Person{
    public:
    string Department;

    public:
    employee(string n, int a, string d) : Person(n, a) {
    this->Department = d;
    cout << "Constructor of employee class called" << endl;
}
    ~employee(){
        cout<<"Destructor of employee class called"<<endl;
    }
    void employeedisplay(){
        cout<<"Department: "<<this->Department<<endl;
    }
};
class student:public employee{
    private:
    int Roll_no;
    public:
    student(string n, int a, string d, int roll): employee(n, a, d){
        this->Roll_no=roll;
        cout<<"Constructor of student class called"<<endl;
    }
    ~student(){
        cout<<"Destructor of student class called"<<endl;
    }
    void studentdisplay(){
        cout<<"Roll Number: "<<this->Roll_no<<endl;
    }
};

//mutlilevel inheritance
class teacher: public employee{
    public:
    string subject;
    public:
    teacher(string n, int a, string d, string sub): employee(n, a, d){
        this->subject=sub;
        cout<<"Constructor of teacher class called"<<endl;
    }
    ~teacher(){
        cout<<"Destructor of teacher class called"<<endl;
    }
    void teacherdisplay(){
        cout<<"Subject: "<<this->subject<<endl;
    }
};



int main(){
    cout<<"**************Single inheritance**************"<<endl;
    employee e1("John", 30, "AIML");
    e1.persondisplay();
    e1.employeedisplay();

    cout<<"**************Multilevel inheritance**************"<<endl;
    student s1("Alice", 20, "CSE", 101);
    s1.persondisplay();
    s1.employeedisplay();
    s1.studentdisplay();

    cout<<"**************Multiple inheritance**************"<<endl;
    teacher t1("Bob", 40, "ECE", "Mathematics");
    t1.employeedisplay();
    t1.teacherdisplay();

    return 0;
}