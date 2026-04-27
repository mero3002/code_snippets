#include <iostream>
using namespace std;

class Point{
    private:
        float x;
        float y;
    
    public:
        Point(float x=0, float y=0): x{x}, y{y} {
            cout << "Constructor\n";
        }

        Point operator+(Point& p2){
            // cout << this->x + p2.x << '\n';
            // cout << this->y + p2.y << '\n';
            return Point(this->x + p2.x, this->y + p2.y);
        }

        ~Point(){
            cout << "Destructor\n";
        }
};