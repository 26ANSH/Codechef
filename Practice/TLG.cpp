#include <iostream>
using namespace std;

int main()
{
	int rounds;
	cin>>rounds;
	
	int temp, p1=0, p2=0, max =0, pmax;
	
	while(rounds--)
	{
	    cin>>temp;
	    p1 += temp;
	    cin>>temp;
	    p2 += temp;
	    
	    if(p1>p2)
	    {
	        if((p1-p2)>max)
	        {
	            max = p1-p2;
	            pmax = 1;
	        }
	    }
	    else if(p2>p1)
	    {
	        if((p2-p1)>max)
	        {
	            max = p2-p1;
	            pmax = 2;
	        }
	    }
	    
	}
	
	cout<<pmax<<" "<<max<<endl;
	
	return 0;
}
