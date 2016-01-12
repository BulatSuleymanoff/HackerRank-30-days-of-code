/********************************/
/******* Hackerrank Test ********/
/********************************/

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

class Student
{
protected:
    string firstName;
    string lastName;
    int phone;
public:
    Student(string fName, string lName, int p): \
        firstName(fName), lastName(lName), phone(p) {}
    void display() 
    {
        cout << "First Name: " << firstName << "\nLast Name: " \
             << lastName << "\nPhone: " << phone; 
    }
    
};

/******************************/
/********** Solution **********/
/******************************/

class Grade: public Student
{
public:
    Grade(string fName, string lName, int p, int grade): \
        Student(fName, lName, p), score(grade) {}
    char calculate()
    {
        if (score < 40)
            return 'D';
        else {
            if (score < 60)
                return 'B';
            else {
                if (score < 75)
                    return 'A';
                else {
                    if (score < 90)
                        return 'E';
                    else return 'O';
                }
            }
        }
    }
private:
    int score;   
};

/********************************/
/******* Hackerrank Test ********/
/********************************/

int main() {
    string firstName, lastName;
    int score, phone;
    cin >> firstName;
    cin >> lastName;
    cin >> phone;
    cin >> score;    
    Student *stu = new Grade(firstName, lastName, phone, score);
    stu->display();
    Grade *g = (Grade*)stu;
    cout << "\nGrade: " << g->calculate();
    return 0;
}