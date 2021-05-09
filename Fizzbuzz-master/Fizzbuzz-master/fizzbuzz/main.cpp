#include <iostream>
using namespace std;
int main()
{
  int i;
  for( i=1;i<101;i++)

  if(i%3==0 && i%5==0)
  {
    std::cout<<"Fizzbuzz \n";
  }
  else if (i%5==0)
  {
    std::cout<<"Buzz \n";
  }
  else if(i%3==0)
  {
    std::cout<<"Fizz \n";
  }


  else
  {
    std::cout<<i<<"\n";
  }
}

