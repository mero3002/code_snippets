#include <iostream>
#include "1.h"
using namespace std;
int main()
{
    string arr1[] = {"Math", "English", "Arabic"};
    Student s1(1, "Ahmed", 3, arr1);

    string arr2[] = {"Data Structures", "Linear Algbra", "Programming II", "Discrete Math"};
    Student s2(2, "Mahmoud", 4, arr2);

    string arr3[] = {"Electronics", "Physics", "Discrete", "English", "Cloud"};
    Student s3(3, "Saeed", 5, arr3);
    
    cout << '\n';

    cout << "Student 1:\n";
    s1.display();
    cout << '\n';

    cout << '\n';
    cout << "Student 2:\n";
    s2.display();
    cout << '\n';

    cout << '\n';
    cout << "Student 3:\n";
    s3.display();
    cout << '\n';

    return 0;
}