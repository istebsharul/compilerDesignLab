#include<iostream>
using namespace std;

void comLine(string com){
    int count=0;
    if(com[0]=='/')
    
    {
        if(com[1]=='/')
        {
            cout<<"This is a single line comment";
            count++;
        }
        else if(com[1]=='*')
        {
            for(int i=2;i<=100;i++)
            {
               if(com[i]=='*'&& com[i+1]=='/')
               {
                   cout<<"It is a multiple line comment"<<endl;
                   count++;
               }
            }
        }
        else
        {
            cout<<"This is not a comment line";
        }
    }
    else if(com[0]=='#')
    {
            cout<<"This is a comment line";
            count++;
    }
    else
    {
        cout<<"This is not a comment line.";
    }
}
int main()
{
    string com;
    cout<<"Enter : "<<endl;
    cin>>com;
    comLine(com);
    return 0;
}
