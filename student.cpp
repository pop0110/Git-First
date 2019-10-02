#include <iostream>
using namespace std;
int main()
{
   
    int n,m ;
   
    int initial_cost=0;
    int cost_per_rickshaw=0;
    int total_cost_rickshaw=0;
    int cost_per_cab=0;
    int total_cost_cab=0;
    int total_cost=0;
    int count=0;
    int totalCases;
    cin>>totalCases;
    int currentCase=0;
    int c1,c2,c3,c4;
    
    while(currentCase<totalCases){
        cin>>c1>>c2>>c3>>c4;
         cin>>n>>m;
         count=0;
         initial_cost=0;
    while(count<n)
    {
        
        int ai;
        cin>>ai;
        cost_per_rickshaw=c1*ai;
        if(cost_per_rickshaw>c2)
        {
            cost_per_rickshaw=c2;
        }
    total_cost_rickshaw=cost_per_rickshaw+initial_cost;
    initial_cost=total_cost_rickshaw;
    count++;
    }
    if(total_cost_rickshaw>c3)
    {
        total_cost_rickshaw=c3;
    }
    count =0;
    initial_cost=0;
    while(count<m)
    {
        int bi;
        cin>>bi;
        cost_per_cab=c1*bi;
        if(cost_per_cab>c2)
        {
            cost_per_cab=c2;
        }
        total_cost_cab=cost_per_cab+initial_cost;
        initial_cost=total_cost_cab;
        count++;
    }
    if(total_cost_cab>c3)
    {
        total_cost_cab=c3;
    }
    total_cost=total_cost_cab+total_cost_rickshaw;
    if(total_cost>c4)
    {
        total_cost=c4;
    }
    cout<<total_cost<<endl;
    currentCase++;
    }
    return 0;
}
