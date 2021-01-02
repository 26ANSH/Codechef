#include<iostream>
using namespace std;

unsigned long long int contests(unsigned long long int avail, unsigned long long int req, unsigned long long int days)
{
    if(avail < req)
        return 0;
    
    unsigned long long int compete = avail/req;
    
    if(compete>days)
        return days;
    else
        return compete;
        
    return 0;
}

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        unsigned long long int provider= 0, req_qs= 0, days= 0, avail_qs = 0, temp= 0;
        
        cin>>provider>>req_qs>>days;
        
        for (int i = 0; i<provider; i++)
        {
            cin>>temp;
            avail_qs += temp;
        }
        
        cout<<contests(avail_qs, req_qs, days)<<endl;
         
    }
    return 0;
}
