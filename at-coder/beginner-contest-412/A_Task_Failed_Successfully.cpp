#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin >>testCase;
    int count =0;
    while (testCase--)
    {
        
        int a,b;
        cin >>a>>b;
        if(a<b) count++;

    }
    cout << count <<endl;
    
    return 0;
}