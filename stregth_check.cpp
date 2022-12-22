#include<bits/stdc++.h>
using namespace std;


int main()
{
    int base, pow, flag = 0;
    string st2; // storing each word
    string p;
    fstream in("code.cpp"); //Read mode 
    ofstream out("optimized_code.cpp");//Write mode
    
    while(in>>st2) //Reading word by word
    {
        if(st2 != "pow")
        {
            
            out<<st2<<" "; 
        }
        
        //If we encounter
        else{
            char ch;
            while(!in.eof())
            {
                
                in>>ch;

                if(isdigit(ch) && flag == 0)
                {
                    flag++;
                    base = ch - '0'; //Converts a charecter to integer

                }
                else if(isdigit(ch) && flag == 1)
                {
                    pow = ch -'0';
                    
                }
                else if(ch == ')')
                {
                    break;
                }
            }
            flag =0;
            for(int i = 0;i<pow;i++)
            {
                if(i != pow-1)
                    out<<base<<"*";
                else
                    out<<base<<" ";
            }
            

        }

        

        




    }
}