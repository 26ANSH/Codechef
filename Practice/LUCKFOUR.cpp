#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int count =0;
        string num;
        cin>>num;
        
        for(char digit : num)
            if(digit == '4')
                count++;
        
        cout<<count<<endl;
    }
    
	return 0;
}
