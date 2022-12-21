#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> mp{{"float",1},{"int",1},{"string",1},{"double",1},{"long",1}};
    unordered_map<string,int> op{{"+",1},{"-",1},{"*",1},{"%",1},{"=",1}};
    unordered_map<string,int> braces{{"(",1},{"{",1},{"[",1}};
    unordered_map<string,int> braces2{{")",1},{"}",1},{"]",1}};
    int num = 0,key = 0,blank = 0,oper = 0,var =0,bar = 0;
    fstream F2;
    F2.open("test9.cpp", ios::in);
    string temp;
    while (1)
    {
        F2 >>temp;
        if(mp.find(temp)!=mp.end())
            {
                cout<<"It's a keyword "<<temp<<endl;
                key++;
            }
            else if(braces.find(temp)!=braces.end())
            {
                cout<<"It's an opening parenthesis "<<temp<<endl;
                bar++;
            }
            else if(braces2.find(temp)!=braces2.end())
            {
                cout<<"It's a closing parenthesis "<<temp<<endl;
            }
            else if(op.find(temp)!=op.end())
            {
                cout<<"It's a operator "<<temp<<endl;
                oper++;
            }
            else if(temp[0]>='0' && temp[0]<='9')
            {
                cout<<"It's a number "<<temp<<endl;
                num++;
            }
            else if(temp[0]==';')
            {
                cout<<"It's an semicolon"<<endl;
            }
            else 
            {
                cout<<"It's a variable "<<temp<<endl;
                var++;
            }
            cout<<"It's a blank space"<<endl;
            blank++;
        if (F2.eof())
            break;
    }

    cout<<"No. of numbers ="<<num<<endl;
    cout<<"No. of Keywords ="<<key<<endl;
    cout<<"No. of operators ="<<oper<<endl;
    cout<<"No. of blank space ="<<blank<<endl;
    cout<<"No. of variables ="<<var<<endl;
    cout<<"No. of parenthesis ="<<bar<<endl;

    return 0;
}