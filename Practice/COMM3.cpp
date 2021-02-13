#include <iostream>
#include <cmath>
using namespace std;

float length(int x1, int y1, int x2, int y2) 
{ 
    // Calculating distance 
    return sqrt(pow(x2 - x1, 2) +  pow(y2 - y1, 2) * 1.0); 
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int range;
        int dist[3][2];
        
        cin>>range;
        
        for(int i = 0; i<3;i ++)
        for(int k=0; k<2; k++)
        cin>>dist[i][k];
        
        bool connect = false;
        
        float a = length(dist[0][0], dist[0][1], dist[1][0], dist[1][1]);
        float b = length(dist[2][0], dist[2][1], dist[1][0], dist[1][1]);
        float c = length(dist[0][0], dist[0][1], dist[2][0], dist[2][1]);
        
        //cout<<"R="<<range<<" || "<<a<<" | "<<b<<" | "<<c<<" | "<<endl;
        
        if(a<=range && b<=range && c<=range)
        connect=true;
        else if ((a<=range && b<=range) || (a<=range && c<=range) || (b<=range && c<=range))
        connect=true;
        
        // 2 | 2.23607 | 2.23607 | 
       
        if(connect == true)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
    
	return 0;
}
