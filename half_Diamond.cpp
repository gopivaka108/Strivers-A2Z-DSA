#include<iostream>
int main() {
    int n = 3;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=n-2;i>=0;i--) {
        for(int j=0;j<=i;j++) {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
