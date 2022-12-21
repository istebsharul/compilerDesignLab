#include <bits/stdc++.h>
using namespace std;

bool E(string, int &, int);
bool A(string, int &, int);
bool T(string, int &, int);
bool B(string, int &, int);
bool F(string, int &, int);
bool match(char, char);
bool terminal(char);

bool E(string ip, int &i, int l)
{
    if (T(ip, i, l))
    {
        i++;
        if (i <= l)
            return A(ip, i, l);
        i--;
        return true;
    }
    return false;
}
bool T(string ip, int &i, int l)
{
    if (F(ip, i, l))
    {
        i++;
        if (i < l)
            return B(ip, i, l);
        i--;
        return true;
    }
    return false;
}
bool A(string ip, int &i, int l){
    if (i < l){
        if (terminal(ip[i])){
            if (match(ip[i], '+')){
                i++;
                if (i < l){
                    if (T(ip, i, l)){
                        i++;
                        // if(i<l)
                        return A(ip, i, l);
                        // return true;
                    }
                    return false;
                }
                return false;
            }
            i--;
            return true;
        }
        return true;
    }
    return true;
}


bool B(string ip, int &i, int l){
    if(i < l){
        if (terminal(ip[i])){
            if (match(ip[i], '*')){
                i++;
                if (i < l){
                    if (F(ip, i, l)){
                        i++;
                        return B(ip, i, l);
                    }
                    return false;
                }
                return false;
            }
            i--;
            return true;
        }
        return true;
    }
    return true;
}
bool F(string ip, int &i, int l)
{
    if (terminal(ip[i]))
    {
        if (match(ip[i], '('))
        {
            i++;
            if (i < l)
            {

                if (E(ip, i, l))
                {
                    i++;
                    if (i < l)
                        if (match(ip[i], ')'))
                            return true;
                    return false;
                }
                return false;
            }
            return false;
        }
        else if (match(ip[i], 'i'))
        {
            // i--;
            return true;
        }

        return false;
    }
    return false;
}


bool match(char c, char ch)
{
    if (c == ch)
        return true;
    return false;
}


bool terminal(char c)
{
    if (isalpha(c))
    {
        if (isupper(c))
            return false;
        return true;
    }
    return true;
}

int main()
{
    string istring;
    cout << "Enter input string:";
    cin >> istring;
    int l = istring.size();
    int i = 0;
    if (E(istring, i, l))
    {
        cout << "Accepted by Parser";
    }
    else
        cout << "Rejected by parser";
    return 0;
}
