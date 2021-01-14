#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    
    while(test--)
    {
        string str;
        cin>>str;
        int first = str[0]-48;
        int last = str[str.length() -1] -48;
        cout<<(first + last)<<endl;
    }
	return 0;
}
