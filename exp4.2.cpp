#include <iostream>
using namespace std;
class Construct 
{
public:
    float area;

    Construct() 
	{
        area = 0;
    }

    Construct(int a, int b) 
	{
        area = a * b;
    }

    void disp() 
	{
        cout << "Area: " << area << endl;
    }
};

int main() 
{
    cout << "Name -: Samiksha Babasaheb Kamble" << endl;
    cout << "Div  -: B" << endl;
    cout << "Roll No -: 60" << endl;
    cout << "---------------------------" << endl << endl;

    Construct o;        
    Construct o2(10, 20); 

    o.disp();
    o2.disp();

    return 0;
}


