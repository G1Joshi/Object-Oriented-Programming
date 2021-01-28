#include <iostream>
#include <string>
using namespace std;

class Class
{
private:
    string Name;

public:
    void setName(string);
    string getName();
};

void Class::setName(string name)
{
    Name = name;
}

string Class::getName()
{
    return Name;
}

int main()
{
    Class Object;
    Object.setName("Jeevan");
    cout << Object.getName();
    return 0;
}
