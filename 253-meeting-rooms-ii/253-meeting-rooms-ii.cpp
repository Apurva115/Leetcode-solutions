class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int sz = intervals.size();
        priority_queue<int,  vector<int>, greater<int>> minHeap;
        sort(intervals.begin(), intervals.end());
        
        minHeap.push(intervals[0][1]);
        for (int i = 1; i < sz; i++) {
            if (minHeap.top() <= intervals[i][0]) {
                minHeap.pop();
            }
            minHeap.push(intervals[i][1]);
        }
        return minHeap.size();
        
       
    }
};