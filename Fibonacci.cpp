#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;

        int a=1, b=1, c;
        if(n==1 || n==2) {
                cout<<1;
        }
        else {
                for(int i=2;i<n;i++) {
                        c = a+b;
                        a = b;
                        b = c;
                }
                cout<<c;
        }
        return 0;

}