#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        string num;
        cin>>num;
        
        string rev = num;
        reverse(rev.begin(), rev.end());
        
        if(rev == num)
        cout<<"wins\n";
        else
        cout<<"loses\n";
    }
    
	return 0;
}
