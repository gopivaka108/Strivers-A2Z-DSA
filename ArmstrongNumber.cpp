#include<iostream>
#include<math.h>
#include<string>

std::string Armstrong(int n) {
    int dup = n; int temp = n;
    int sum = 0;
    int count = 0;
    int lastDigit;
    while(temp>0) {
        temp = temp/10;
        count++;
    }
    while(n>0) {
        lastDigit = n%10;
        sum = sum+pow(lastDigit,count);
        n = n/10;
    }

    if(sum == dup) return "Armstrong";
    else return "not Armstrong";
}

int main() {
    std::cout<<Armstrong(1634);
    return 0;
}