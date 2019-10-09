class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        int left=0,right=0;
        map<char,int> cmap;
        for(int i=0;i<s.length();i++){
            if(cmap[s[i]]==0){
                cmap[s[i]]=1;
                right=i;
            }else if(cmap[s[i]]==1){
                cmap[s[i]]=2;
                right=i;
                while(left<right&&cmap[s[i]]>1){
                    cmap[s[left]]--;
                    left++;
                }
            }
            int length=right-left+1;
            maxLength=length>maxLength?length:maxLength;
        }
        return maxLength;
    }
};
