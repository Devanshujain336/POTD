LC potd

approach -> mapped the character with their last index and then iterated till the max index of the character in between them

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        map<char,int>mpp;
        int n = s.length();
//storing the last index of the character
        for(int i=0;i<n;i++){
            mpp[s[i]] = i;
        }

        int maxi = 0;
        int maxi1 = 0;

        while(maxi<n){
          for(int i=maxi; i<mpp[s[maxi]] ; i++){

            if(mpp[s[i]]>maxi){
                maxi = mpp[s[i]];
            }
            
          }
          maxi = maxi+1;
        
          ans.push_back(maxi-maxi1);
            maxi1= maxi;
        }
    return ans; }
};
