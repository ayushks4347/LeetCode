class Solution {
public:
    string removeStars(string s) {
        stack<char>a;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                a.pop();
            }
            else{
                a.push(s[i]);
            }
        }
        string res="";
        while(!a.empty()){
            res.push_back(a.top());//top of the stack enters first and all the characters are pushed after it. it enters in reverse manner
            a.pop();
        }
        reverse(res.begin(),res.end());
        return res;

    }
};