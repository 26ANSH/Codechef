#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool hosted(string year)
{
    string years[] = {"2010", "2015" , "2016", "2017", "2019"};
    for(string s : years)
    {
        if(year == s)
            return true;
    }
    return false;
}

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
        if(hosted(str))
            cout<<"HOSTED"<<endl;
        else
            cout<<"NOT HOSTED"<<endl;
    }
    
    return 0;
}
