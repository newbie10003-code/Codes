class Solution {
public:
    int convert(char ch)
    {
        if(ch=='I')
        {
            return 1;
        }
        else if(ch=='V')
        {
            return 5;
        }
        else if(ch=='X')
        {
            return 10;
        }
        else if(ch=='L')
        {
            return 50;
        }
        else if(ch=='C')
        {
            return 100;
        }
        else if(ch=='D')
        {
            return 500;
        }
        else if(ch=='M')
        {
            return 1000;
        }   
     return 0;
    }
    int romanToInt(string s) {
        int sum=0,n,m;
        char ch;
       int i=0;
        while(s[i]!='\0')
        {
            n=convert(s[i]);
            if(convert(s[i+1])<=convert(s[i]))
            {
              sum=sum+n;
                i++;
            }
            else if(convert(s[i+1])>convert(s[i]))
            {
                m=convert(s[i+1])-convert(s[i]);
                sum=sum+m;
                i=i+2;
            }
                
        }
        return sum;
    }
};