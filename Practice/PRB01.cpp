#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    if(n==1)
    return false;
    
    for(int i =2;i<=sqrt(n);i++)
    if(n%i ==0)
    return false;
    
    return true;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int n;
        cin>>n;
        
        if(isprime(n))
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
    
	return 0;
}
