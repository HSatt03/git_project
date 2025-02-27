#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    string name;
    string food;
};
class Student
{
public:
    int id;
    string LastName;
};
int main()
{
    Person P;
    Student Stu;
    cout << "Enter your name!" << endl;
    getline(cin, P.name);
    cout << "Hello " << P.name << "!" << endl;
    cout << "Enter yuor age!" << "\n";
    cin >> P.age;
    cin.ignore();
    cout << "You are " << P.age << "years old!" << endl;
    cout << "Which food do you like?" << endl;
    getline(cin, P.food);
    cout << "You like " << P.food << " very much!" << endl;
    cout << "+++++++++++++++++" << "\n";
    cout << "Enter your lastname: " << endl;
    getline(cin, Stu.LastName);
    cout << "Your id: " << endl;
    cin >> Stu.id;
    cout << "your lastname is " << Stu.LastName << " and your id is " << Stu.id << endl;
    return 0;
}