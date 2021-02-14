#include <iostream>
using namespace std;
int main ()
{
  char*week[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
  int test;
  cin>>test;
  
  while(test--)
  {
    int year,days;
    cin>>year;
    days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;
    cout<<week[days%7]<<endl;
  }
  return 0;
}
