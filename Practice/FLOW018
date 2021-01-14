#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int *fact = new long long int[22];
    fact[0]=1;
    
    
    for(int i=1;i<22;i++)
    fact[i] = fact[i-1] * i; 
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    
	return 0;
}
