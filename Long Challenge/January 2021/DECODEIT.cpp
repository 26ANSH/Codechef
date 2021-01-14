#include<iostream>
#include <string>

using namespace std;
int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int size;
        cin>>size;
        
        string code;
        cin>>code;
        
        string decode = "";
        
        for (int i=0; i<size; i+=4)
        {
            string temp = code.substr(i, 4);
            int num = stoi(temp, 0, 2);
            decode += char(num+97);
        }
        
        cout<<decode<<endl;
    }
    
    return 0;
}
