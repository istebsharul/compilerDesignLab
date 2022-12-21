#include<bits/stdc++.h>
using namespace std;

void firstF(map<char, vector<string>> &pr, char ch, map<char, vector<char>> &ans, char prev)
{
    for (auto a : pr[prev])
    {
        if (a[0] >= 65 && a[0] <= 90) firstF(pr, ch, ans, a[0]);
        else ans[ch].push_back(a[0]);
    }
}

void follow(map<char, vector<string>> &pr, char ch, map<char, vector<char>> &ans, char prev,map<char, set<char>> &f,bool &flag)
{    
    for(auto a: pr)
    {
        for(auto s: a.second)
        {
            for(int i=0;i<s.size();i++)
            {
                if(prev==s[i] && i<s.size()-1 && ( s[i+1]<65 || s[i+1]>90))
                {
                    if(f[prev].find(s[i+1])==f[prev].end())
                    {
                        f[prev].insert(s[i+1]);
                        flag = true;
                    }
                }
                else if(prev==s[i] && i<s.size()-1 && s[i+1]>= 65 && s[i+1]<=90)
                {
                    for(auto e : ans[s[i+1]])
                 ok   {
                        if(f[prev].find(e)==f[prev].end())
                        {
                            f[prev].insert(e);
                            flag = true;
                        }
                        
                    }
                    
                }
                else if(prev==s[i] && i==s.size()-1)
                {
                    for(auto e : f[a.first])
                    {
                        if(f[prev].find(e)==f[prev].end())
                        {
                            f[prev].insert(e);
                            flag = true;
                        }
                    }
                }
            }
        }
    }
}


int main()
{
    int n;
    cout<<"Enter no. of productions"<<endl;
    cin >> n;
    map<char, vector<string>> pr;
    map<char, vector<char>> ans;
    map<char, set<char>> fol;

    char ch, e, f;
    string s;
    cout<<"Enter the productions"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ch >> e >> f >> s;
        pr[ch].push_back(s);
    }
    fol['S'].insert('$');
    for (auto a : pr) firstF(pr, a.first, ans, a.first);
    cout<<"first:"<<endl;
    for (auto a : ans)
    {
        cout << a.first << "= { ";
        for (auto ch : a.second)  cout << ch << " ";
        cout << "}" << endl;
    }
    bool flag = true;
    while(flag)
    {
        flag = false;
        for (auto a : pr) follow(pr, a.first, ans, a.first,fol,flag);

    }
    cout<<"follow:"<<endl;
    for (auto a : fol)
    {
        cout << a.first << "= { ";
        for (auto ch : a.second)  cout << ch << " ";
        cout << "}" << endl;
    }

    

    return 0;
}

