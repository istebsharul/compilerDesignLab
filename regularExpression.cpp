#include<bits/stdc++.h>
using namespace std;

void check(string s){
    if(s[0]=='a' && s[1]=='b' && s[2]=='b' && s[3]==0){
            cout<<"Accepted by 3"<<endl;
            return;
        }
        else cout<<"Not Accepted 3"<<endl;
}

void check1(string s){
    for(int i=0; i<s.size();i++){
        if(s[i]=='a' && (s[s.size()-1]!='b')){
            cout<<"Accepted by 1"<<endl;
            return;
        }
        else cout<<"Not Accepted by 1"<<endl;
         return;
    }
}

void check2(string s){
    if(s[s.size()-1]=='b' && (s[0]=='a'|| s[0]=='b')){
        cout<<"Accepted by 2"<<endl;
    }
    else cout<<"Not Accepted by 2"<<endl;
}

int main(){
    string s;
    cin>>s;
    // s.append(t);
    check(s);
    check1(s);
    check2(s);
}