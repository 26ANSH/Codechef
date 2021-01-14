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
        int n1, n2, n3;
        cin>>n1>>n2>>n3;
        
        if((n1+n2+n3) == 180)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
	return 0;
}
