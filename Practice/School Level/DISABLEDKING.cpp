#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int n;
        cin>>n;
        
        if(n%2 == 0)
        cout<<n<<endl;
        else
        cout<<n-1<<endl;
    }
    
	return 0;
}
