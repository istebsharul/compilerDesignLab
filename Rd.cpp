#include<bits/stdc++.h>
using namespace std;

void E1(string s,int &l){
    if(s[l]=='+'){
        l++;
        if(s[l]=='i'){
             l++;
             E1(s,l);
        }
    }
    else return;  
}

void E(string s,int &l){
    if(s[l]=='i'){
        l++;
    }
    E1(s,l);
}

int main(){
    int l=0;
    string s;
    cout<<"Enter input string"<<endl;
    cin>>s;
    // string s="i+i$";
    E(s,l);
    // cout<<l;
    if(s[l]=='$'){
        cout<<"Parsing Successful"<<endl;
    }
    else cout<<"Unsuccessful"<<endl;
}