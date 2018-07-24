/*
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), 
find the minimum number of conference rooms required.
*/
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
    //It is important to note that we have a ordered map
        
    map<int, int> mp; // key: time; val: +1 if start, -1 if end

    for(int i=0; i< intervals.size(); i++) {
        mp[intervals[i].start] ++;
        cout << intervals[i].start << " " << mp[intervals[i].start] << " ";
        mp[intervals[i].end] --;
        cout << intervals[i].end << " " << mp[intervals[i].end];
        cout << '\n';
            

    }
     //It is important to note that we have a ordered map
     //Because we have a ordered map the maxCnt gives us the max rooms needed at 
     //any point of time. 
     //The map records in a chronlogical order if a room is acquired or has been released 
     //at any point of time. 
     //So the maxCnt in the whole range tells us the max rooms that were needed at any pt of time.    

    int cnt = 0, maxCnt = 0;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cnt += it->second;
        cout << " cnt " << cnt ;
        maxCnt = max( cnt, maxCnt);
        cout << " maxCnt " << maxCnt;

    }
    
    return maxCnt;
}
}; 
   
