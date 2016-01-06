using namespace std;
#include <iostream>

/////////////////////////////////////////////////////////////////////
///////////////////////////// Solution //////////////////////////////
/////////////////////////////////////////////////////////////////////

class Person
{
public:
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
   int age;
};

Person::Person(int initial_Age)
{
    if (initial_Age < 0) {
        cout << "This person is not valid, setting age to 0.\n";
        age = 0;
    }
    else age = initial_Age;
}

void Person::amIOld()
{
    if (age < 13)
        cout << "You are young.\n";
    else if (age < 18)
        cout << "You are a teenager.\n";
        else cout << "You are old.\n";
}

void Person::yearPasses()
{
    ++age;
}

/////////////////////////////////////////////////////////////////////
////////////////////////// HackerRank Test //////////////////////////
/////////////////////////////////////////////////////////////////////

int main()
{
    int T, age;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < 3; j++) {
            p.yearPasses();     
        }
        p.amIOld();
        cout<<"\n";
    }
    return 0;
}