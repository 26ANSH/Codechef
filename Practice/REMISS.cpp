#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int a, b;
        cin>>a>>b;
        
        if(a>b)
        cout<<a<<" ";
        else 
        cout<<b<<" ";
        
        cout<<a+b<<endl;
    }
    
	return 0;
}
