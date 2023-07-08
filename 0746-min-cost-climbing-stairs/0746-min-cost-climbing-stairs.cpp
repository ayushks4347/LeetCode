class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int s=cost.size();
         s=s-3;
        while(s>=0){
           
            cost[s]+=min(cost[s+1],cost[s+2]);
            s--;
        }
        
        return min(cost[0],cost[1]);
        
    }
};