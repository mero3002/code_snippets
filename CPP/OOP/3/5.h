#include <iostream>
using namespace std;

class Distance{
    int feet;
    float inches;

    public:
        static int counter;
        Distance(int ft=1, float inc=1):feet{ft}, inches(inc) {
            counter++;
        }
        int get_feet(){
            return feet;
        }
        float get_inches(){
            return inches;
        }
};
int Distance::counter = 0;