#include <iostream>

using namespace std;

class vol
{
float v,r,h;
public:
void getdata();
void fvol ();
void display();

};

void vol :: getdata()
{
cout<<"Enter radius ";
cin>> r;
cout<<"Enter height ";
cin>>h;

}

void vol :: fvol ()
{
v=3.14*r*r*h;
}

void vol:: display()
{
cout<<"\n The volume is "<<v;
}
int main()
{
vol c ;
c.getdata();
c.fvol();
c.display();

return 0;
}

