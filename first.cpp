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

int main(){
    int n;
    cout<<"Enter no. of productions"<<endl;
    cin >> n;
    map<char, vector<string>> pr;
    map<char, vector<char>> ans;

    char ch, e, f;
    string s;
    cout<<"Enter the productions"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ch >> e >> f >> s;
        pr[ch].push_back(s);
    }

    for (auto a : pr) firstF(pr, a.first, ans, a.first);
    cout<<"first:"<<endl;
    for (auto a : ans)
    {
        cout << a.first << "= { ";
        for (auto ch : a.second)  cout << ch << " ";
        cout << "}" << endl;
    }
}