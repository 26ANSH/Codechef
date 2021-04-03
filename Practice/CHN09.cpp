#include <iostream>
#include <cmath>
#include <string>
#include <vector>
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
        string str;
        cin>>str;
        unsigned long n = str.length(), a = 0;
        for(char c : str)
        {
            if(c=='a')
                a++;
        }

        if(n-a>a)
            cout<<a<<endl;
        else
            cout<<n - a<<endl;
            
    }
    
    return 0;
}
