class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int s1=a.size(),s2=b.size();
        int car=0;
        while(s1>0&&s2>0)
        {
            s1--;s2--;
            cout<<s1<<" "<<s2<<endl;
            int r=car+(a[s1]-'0')+(b[s2]-'0');
            if(r==0)
            {
                car=0;
                res='0'+res;
            }
            else if(r==1)
            {
                car=0;
                res='1'+res;
            }
            else if(r==2)
            {
                car=1;
                res='0'+res;
            }
            else if(r==3)
            {
                car=1;
                res='1'+res;
            }
        }
        while(s1--)
        {
            // cout<<s1<<endl;
            int r=car+(a[s1]-'0');
            if(r==0)
            {
                res='0'+res;
                car=0;
            }
            else if(r==1)
            {
                res='1'+res;
                car=0;
            }
            else if(r==2)
            {
                res='0'+res;
                car=1;
            }
            
        }
        while(s2--)
        {
             // cout<<s2<<endl;
            int r=car+(b[s2]-'0');
            if(r==0)
            {
                res='0'+res;
                car=0;
            }
            else if(r==1)
            {
                res='1'+res;
                car=0;
            }
            else if(r==2)
            {
                res='0'+res;
                car=1;
            }
            
        }
        if(car==1)
        {
            res='1'+res;
        }
        return res;
    }
};
