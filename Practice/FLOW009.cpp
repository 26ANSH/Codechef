#include <iostream>
#include <iomanip>
using namespace std;
#define big long double 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        big q, p, t;
        cin>>q>>p;
        
        if(q>1000)
        q = q*0.9;
        
        t = q*p;
        
        cout<<fixed<<setprecision(6)<<t<<endl;
        
    }
    
	return 0;
}
