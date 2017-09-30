
#include <bits/stdc++.h>

using namespace std;

int solve(string opr) {
    // Complete this function
    int a=(int)opr[0],b=(int)opr[2];
   // cout<<"a"<<a<<" b"<<b<<endl;
    if(opr[1]=='+')
    {
        
        return (a+b-48-48);
    }
    else
        return (a-b);
}

int main() {
    string opr;
    cin >> opr;
    int result = solve(opr);
    cout << result << endl;
    return 0;
}

