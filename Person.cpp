#include<iostream>
using namespace std;

class Person
{
    char name[30];
    int age;

    public:
        void getdata(void);
        void display(void);
};
void Person :: getdata(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << " Enter Age: ";
    cin >> age;
}
void Person :: display(void)
{
    cout << "\nName: "<< name;
    cout << "\nAge: "<<age;
}
int main()
{
    Person P;
    P.getdata();
    P.display();

    return 0;
}