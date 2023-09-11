class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>one,two;
        for(char c:s)
        {
            if(c!='#')
                one.push(c);
            else if((!one.empty())&&c=='#')
                one.pop();
        }
        for(char c:t)
        {
            if(c!='#')
                two.push(c);
            else if((!two.empty())&&c=='#')
                two.pop();
        }
        if(one==two)
            return 1;
        else
            return 0;
    }
};