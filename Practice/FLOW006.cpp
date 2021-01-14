#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int sum = 0;
        
        string str;
        cin>>str;
        
        for (char i : str)
        {
            int num = i-48;
            sum += num;
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}
