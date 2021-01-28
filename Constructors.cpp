#include <iostream>
using namespace std;

class Person
{
private:
    string Name;
    int Age;

public:
    Person(string name, int age)
    {
        Name = name;
        Age = age;
    }
    void getData()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

int main()
{
    Person Jeevan("Jeevan", 22);
    Jeevan.getData();
    return 0;
}
