class Solution {
public:

void flip(vector<int>&nums,int i){
             if(nums[i]==1) nums[i]=0;
             else nums[i]=1;
        }
        
    int minOperations(vector<int>& nums) {
        int count = 0;

        

        for(int i=0;i<nums.size()-2;i++){
             if(nums[i]==0){
             flip(nums,i);
             flip(nums,i+1);
             flip(nums,i+2);
             count++;
             }


        }

        bool flag = true;
       for(int i=0;i<nums.size();i++){
          if(nums[i]==0) {
            flag = false;
          break;
          }
       } 

       if(flag) return count;
       else return -1;
 }
};
