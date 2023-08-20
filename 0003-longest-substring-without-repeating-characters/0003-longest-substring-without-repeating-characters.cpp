class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int arr[256];
        string res="";
        int mx=0;
        int start=-1;

        for(int i=0;i<256;i++)
        {
            arr[i]=-1;

        }

        for(int i=0;i<s.length();i++)
        {
            if(arr[s[i]]>start)
            {
                start=arr[s[i]];
            }

            arr[s[i]]=i;
            mx=max(mx,i-start); //mx=3


        }

        return mx;
        
       
        
    }
};