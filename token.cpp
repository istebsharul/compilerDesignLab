#include<bits/stdc++.h>
using namespace std;

// bool isKeyword(char arr[]){
//     char keywords[32][10]={
//         "auto","break","case","char","const","continue","default",
//         "do","double","else","enum","extern","float","for","goto",
//         "if","int","long","register","return","short","signed",
//         "sizeof","static","struct","switch","typedef","union",
//         "unsigned","void","volatile","while"};

//     for(int i=0;i<32;i++){
//         // cout<<"for Run";
//         if(strcmp(keywords[i],arr)){
//             return true;
//         }
//         else break;
//     }
//     return false;
// }

bool isKeyword(char str[])	
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
        !strcmp(str, "while") || !strcmp(str, "do") ||
        !strcmp(str, "break") ||  !strcmp(str, "continue")
        || !strcmp(str, "int") || !strcmp(str, "double")
        || !strcmp(str, "float") || !strcmp(str, "return")
        || !strcmp(str, "char") || !strcmp(str, "case")
        || !strcmp(str, "long") || !strcmp(str, "short")
        || !strcmp(str, "typedef") || !strcmp(str, "switch")
        || !strcmp(str, "unsigned") || !strcmp(str, "void")
        || !strcmp(str, "static") || !strcmp(str, "struct")
        || !strcmp(str, "sizeof") || !strcmp(str,"long")
        || !strcmp(str, "volatile") || !strcmp(str, "typedef")
        || !strcmp(str, "enum") || !strcmp(str, "const")
        || !strcmp(str, "union") || !strcmp(str, "extern")
        || !strcmp(str,"bool"))
        {
            return true;
        }
    else
    {
       return false;
    }
}

// bool isOperator(char arr[]){
//     char operators[]={+,-,*,/,%,=};
//     if(s)
// }

int main(){
    char c[100] = "int m = n + 3p";
    if(isKeyword(c)){
        cout<<" key word present";
    }
    else cout<<"keyword is not present";
}
