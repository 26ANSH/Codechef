#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)
#define ll long long int
#define ull unsigned long long int
#define loop(a, b, c) for(int i = a; b; c)
#define cutom(a, b) for(int i = a; i<b; i++)

int main() 
{
    fastIO
	
    testloop
    {
        ll n;
	    cin>>n;
	    
	    int zero = 0;
	    
	    loop(5, n/i>=1, i*=5)
	    {
	        zero += n/i;
	    }
	    
	    cout<<zero<<endl;
    }
    
	return 0;
}
