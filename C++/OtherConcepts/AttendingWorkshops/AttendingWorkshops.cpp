#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Workshop
{
    int startTime;
    
    int endTime;
    
    int duration;
};

struct Available_Workshops
{
    int n;
    
    vector<Workshop> w;
};

Available_Workshops* initialize(int* start_time, int* duration, int n)
{
    Available_Workshops* aws=new Available_Workshops();
    
    aws->n=n;
    
    for(int i=0;i<n;++i)
    {
        Workshop ws;
        
        ws.startTime=start_time[i];
        
        ws.duration=duration[i];
        
        ws.endTime=start_time[i] + duration[i];
        
        aws->w.emplace_back(ws);
    }
    
    return aws;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    sort(begin(ptr->w), end(ptr->w), [] (const Workshop & w1, const Workshop & w2) {return w1.endTime < w2.endTime;});
    
    int lastWorkshopEndTime=-1;
    
    int maxWorkshops{};
    
    for(int i=0;i<ptr->n;++i)
    {
        //if the current/next workshop starts at or after the time the current workshop ends
        if(ptr->w[i].startTime >= lastWorkshopEndTime)
        {
            lastWorkshopEndTime=ptr->w[i].endTime;
            
            ++maxWorkshops;
        }
    }
    
    return maxWorkshops;
}