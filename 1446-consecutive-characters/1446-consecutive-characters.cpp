/*class Solution {
public:
    int maxPower(string s) {
      vector<int> p;
      int c=1;
      for(int i=1;i<s.length();i++){
          if(s[i-1]==s[i]){
              c++;
          }
          else{
              p.push_back(c);
              c=1;
          }
          p.push_back(c);
        }
         if (p.empty()) return 1;
      return *max_element(p.begin(),p.end());   
    }
};*/

class Solution {
public:
    int maxPower(string s) {
        int ans=1,t=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                t++;
            }
            else
            {
                ans=max(ans,t);
                t=1;
            
            }
        }
        ans=max(ans,t);
        return ans;

    }
};