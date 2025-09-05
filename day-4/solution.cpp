#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    // Constructor
    Person(int initialAge)
    {
        if (initialAge < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else
        {
            age = initialAge;
        }
    }

    // Method to increment age by 1
    void yearPasses()
    {
        age++;
    }

    // Method to print age category
    void amIOld()
    {
        if (age < 13)
        {
            cout << "You are young." << endl;
        }
        else if (age >= 13 && age < 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            cout << "You are old." << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; i++)
    {
        int age;
        cin >> age;
        Person p(age);
        p.amIOld(); // Check initial age
        for (int j = 0; j < 3; j++)
        {
            p.yearPasses(); // Increment age by 1 for 3 years
        }
        p.amIOld();   // Check age after 3 years
        cout << endl; // Extra line as per output format
    }

    return 0;
}
