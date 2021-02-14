#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    cout<<fixed<<setprecision(0);
    
    while(test--)
    {
        long double a, b;
        cin>>a>>b;
        a /= 2;
        cout<<ceil(a*b)<<endl;
        
    }
    
	return 0;
}
