#include<bits/stdc++.h>
using namespace std;

bool left(vector<string> &s)
{
    for(auto a: s)
    {
        if(a[0]==a[3]) return true;
    }
    return false;
}

//E-> E+T 
// t->id

int main()
{
   
    int n;
    cin>>n;
    vector<string> s(n);
    // string a;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    if(left(s)) cout<<"left recursion is present";
    else cout<<"Left recursion isn't present";

    return 0;
}