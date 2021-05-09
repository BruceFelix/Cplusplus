#include <iostream>

using namespace std;
// from line 6 to line 8 am intiallizing my intergers
//where h is my height and b is my base
//that leaves a as my area

float h;
float b;
float a;
int main()
{
    cout << "Hello world!" << endl;
    cout << "Enter the value of h."<<endl;
    cin >> h;
    cout<< "Enter value of b."<<endl;
    cin >> b;
    a=0.5* b * h;
    cout<< "Your area of the triangle is "<< a <<"square centimeters";

    return 0;
}
