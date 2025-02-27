#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    int age;
};
int main()
{
    string name;
    Person P;
    cout << "Enter your name!" << endl;
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    cout << "Enter yuor age!" << "\n";
    cin >> P.age;
    cout << "You are " << P.age << "years old!" << endl;
    return 0;
}