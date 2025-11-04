#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        this->feet = f;   
        this->inch = i;
    }

    void operator-() {
        feet--;
        inch--;
        cout << "\nFeet & Inches (After Decrement): " 
             << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    cout << "Name  : Samiksha Babasaheb Kamble\n";
    cout << "Roll No : 60\n";
    cout << "Class : S.Y. B. CSE\n";
   
    Distance d1(8, 9);
    cout << "Initial Distance: " << d1.feet << " feet " << d1.inch << " inches" << endl;

    -d1;  

    return 0;
}


