#include <iostream> 
using namespace std;
#define rem(a,b) a%b

int main() 
{
	int test;
	cin>>test;
	
	while (test--) 
	{
	    int a, b;
	    cin>>a>>b;
	    cout<<rem(a,b)<<endl;
	}

	return 0;
}
