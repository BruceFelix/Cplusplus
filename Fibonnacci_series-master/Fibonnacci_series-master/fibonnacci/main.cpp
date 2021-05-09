/*This is a program to print fibonacci series using recursion.
The fibonacci numbers are the numbers following integer sequence
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

By definition m the first two fibonacci numbers are 0 and 1, and each subsequent number is the sum of the two previous two

Fn = Fn-1 + Fn-2 */

#include <iostream>

using namespace std;

int main()
{

   int F0=0;
   int F1=1;
   int Fn;
   int n , i;

    cout<<"Enter the number of terms:"<<endl;
    cin>>n;


cout<<"fibonnacci sequence is "<<endl;

    for(i=0; i<=n; ++i)
    {
        cout<<F0<<endl;
        Fn= F0 + F1;
        F0=F1;
        F1=Fn;
    }


    return 0;
}
