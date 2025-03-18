LEETCODE

Approach -> we made a sliding window, where we make our check loop from i to j, and if AND condition does not satisfy we mark bool as false anad break loop , and increament i, if coniditon satisfy then it check for all, if all satisfies, then bool remains true, making j++
this covers the window

TC - O(n*n)
SC = O(1)


class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 1;
            
        int maxi = 1;
        int i = 0;
        int j = 1;
        // int count = 1;

        while (j < nums.size()) {
bool flag = true;
            for(int k=i;k<j;k++){
             if ((nums[k] & nums[j]) != 0) {
                 flag = false;
           break;
            
                    }
            }

          if(flag==true){
                maxi = max(maxi, j-i+1);
            j++;
          } 
          else  {
            i++;
        
          }
    }
   
     
        return maxi;
    }
};
