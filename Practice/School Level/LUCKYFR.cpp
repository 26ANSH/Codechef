#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        string str;
        cin>>str;
        
        cout<<count(str.begin(), str.end(), '4')<<endl;
    }
    
	return 0;
}
