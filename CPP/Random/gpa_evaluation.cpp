#include <iostream>
using namespace std;
int main()
{
    cout << "<< GPA Evaluations System >>\n";
    float x;
    cout << "Enter your percentage: "; cin >> x;
    cout << "Evaluation in GPA : " << x / 100 * 4 << endl;
    if(x>=0 && x <=49)
        {
        cout << "Evaluation in letter: F. \n";
        cout << "Evaluation overall: Failed. \n";
    }
    else if (x >= 50 && x <= 64) {
        cout << "Evaluation in letter: D. \n";
        cout << "Evaluation overall: Fair. \n";
    }
    else if (x >= 65 && x <= 74) {
        cout << "Evaluation in letter: C. \n";
        cout << "Evaluation overall: Good. \n";
    }
    else if (x >= 75 && x <= 84) {
        cout << "Evaluation in letter: B. \n";
        cout << "Evaluation overall: Very Good. \n";
    }
    else if (x >= 85 && x <= 100) {
        cout << "Evaluation in letter: A. \n";
        cout << "Evaluation overall: Excellent. \n";
    }
    else {
        cout << "Enter a valid percentage.";
    }
}
