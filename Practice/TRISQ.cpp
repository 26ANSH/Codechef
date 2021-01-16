#include <iostream>
#include <cmath>
using namespace std;
#define big int long long

bool isodd(int n) 
{ 
    // n&1 is 1, then odd, else even 
    return (n & 1); 
} 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        big side;
        cin>>side;
        
        if(side<4)
        {
            cout<<0<<endl;
            continue;
        }
        
        if(isodd(side))
        side -= 1;
        
         side -= 4;
         
         big term = side/2 + 1;
         big sqr = ( ((0.5)*((int)pow(term, 2))) + ((0.5)*term) );
         
         cout<<sqr<<endl;
    }
    
	return 0;
}
