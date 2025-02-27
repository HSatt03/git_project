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
int main()
{
    Person P;
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
    return 0;
}