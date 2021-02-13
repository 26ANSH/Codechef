#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int amount;
	double balance;
	cin>>amount>>balance;
	cout<<fixed<<setprecision(2);
	
	if(amount>0)
	{
	    if((amount+0.50)>balance)
	    cout<<balance;
	    else if(amount%5 == 0)
	    cout<<(balance - amount - 0.50);
	    else
	    cout<<balance;
	}
	else
	cout<<balance;
	
	return 0;
}
