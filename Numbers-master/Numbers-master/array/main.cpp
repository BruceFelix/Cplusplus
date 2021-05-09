#include <iostream>

using namespace std;

class S
{
float sum,avg, age, values[10];
int i;
public:
void fetchdata();
void display();
    S()//constructor
    {
    sum=0;
    }
};

void S :: fetchdata()
{
cout<<"\n Enter the values into the array";
for(i=0;i<10;i++)
{
cout<<"Enter values in cell" <<">"<<i;
cin>>values [i];
sum= sum + values [i];
}
avg=sum/10;
}

void S::display()
{
cout<<"\n the values eneter data"<<"\n";
for (i=0;i<10;i++)
{
cout << values[i]<<"\t";
}
cout<<"\n The sum is "<<sum;
cout<<"\n The average is"<<avg;

}
int main()
{
S T;
T.fetchdata();
T.display ();
return 0;
}
