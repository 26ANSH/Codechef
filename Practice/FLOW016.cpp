#include <iostream>
#include <cmath>
using namespace std;
#define big long long int 

big gcd(int a, int b)
{
    if (a == 0 || b==0) 
    return b+a; 
    
    return gcd(b % a, a); 
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        big a, b;
        cin>>a>>b;
        
        big g = gcd(a, b);
        big l = ((a/g) * b);
        
        cout<<g<<" "<<l<<endl;
    }
    
	return 0;
}
