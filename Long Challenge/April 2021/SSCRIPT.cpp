#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        long int n, k, count=0, temp = 0;
        cin>>n>>k;
        string code;
        cin>>code;
        
        for(char c :  code)
        {
            if(c=='*')
            {
                temp++;
            }
            else
            {
                if(temp  > count)
                {
                    count = temp;
                }
                temp = 0;
            }
        }
        
        if(temp  > count)
        {
         count = temp;
        }
        
        if(count >= k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
