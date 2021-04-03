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
    
    int match[] = {6,2,5,5,4,5,6,3,7,6};
    while(test--)
    {
        long int num1, num2, count=0;
        cin>>num1>>num2;
        
        num1+=num2;
        
        while(num1>0)
        {
            num2 = num1%10;
            num1/=10;
            count+=match[num2];
        }
        cout<<count<<endl;
    }
    
    return 0;
}
