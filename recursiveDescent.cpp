#include<bits/stdc++.h>
using namespace std;

int main()
{
    char in[10], ch[10], p[10], pb[10][10];
    int i, j, n, f;
    cout << "Enter the no of productions"<<endl;
    cin >> n;
    cout << "Enter the production and production body"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << "production"<<endl;
        cin >> p[i];
        cout << "production body"<<endl;
        cout << p[i] << "->";
        cin >> pb[i];
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (p[i] == pb[0][j])
            {
                pb[0][j] = pb[i][0];
                cout << pb[0];
                cout <<endl;
            }
        }
    }
    cout << "Enter the input string"<<endl;
    cin >> in;
    i = 0;
    for (j = 0; j < n; j++)
    {
        if (pb[0][j] == in[i])
        {
            f++;
            i++;
        }
    }
    if (f == 3)
    {
        cout << "Accepted"<<endl;
    }
    else
    {
        cout << "Not accepted"<<endl;
    }
    return 0;
}