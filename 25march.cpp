class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       int count = 0;
       int r = meetings.size()-1;
       int maxi;

       sort(meetings.begin(),meetings.end());

       count = meetings[0][0]-1;
maxi= meetings[0][1];
       for(int i=1;i<meetings.size();i++){
       
      if(maxi < meetings[i][0]) //this checking for the first smaller array element and maxi making the 2nd index of array as max
      count+=(  meetings[i][0] - maxi - 1);
       maxi = max(maxi,meetings[i][1]);

        }
      

       count+= ( days - maxi );
        
   return count; }
};
