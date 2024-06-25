class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.length();
        if(n==1){
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(st.empty() && s[i]==')'|| st.empty() && s[i]=='}' || st.empty() && s[i]==']')
            {
              return false;
             }
            
            if(ch=='('||ch=='{'||ch=='[')
            {
                st.push(ch);
             }
            else
            {
                
                char t=st.top();
                if((ch==')'&&t=='(')||(ch=='}'&&t=='{')||(ch==']'&&t=='['))
                {
                st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }
};