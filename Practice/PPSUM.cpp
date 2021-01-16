#include <iostream>
using namespace std;
#define big long long int

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        big d, n;
        cin>>d>>n;
        
        while(d--)
        {
            n = (n*(n+1))/2;
        }
        
        cout<<n<<endl;
    }
    
	return 0;
}
