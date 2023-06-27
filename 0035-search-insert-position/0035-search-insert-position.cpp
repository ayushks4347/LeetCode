class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int max=nums.size()-1;
        int min=0;
        int mid;
        if(max==min&&nums[max]==target){
            return max;
        }
        else{
        while(max>=min){
            mid=(max+min)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
               max=mid-1; 
            }
            else if(nums[mid]<target){
                min=mid+1;
            }
        }}
        
            if(nums[mid]>target){
                return mid;
            }
            else{
                return mid+1;
            }
        
        

  
    }
};