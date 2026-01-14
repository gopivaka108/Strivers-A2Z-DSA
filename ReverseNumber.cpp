#include<iostream>

int ReverseNumber(int num) {
    int revNum = 0;
    while(num>0) {
        int lastDigit = num%10;
        revNum = (revNum * 10) + lastDigit;
        num = num/10;
    }
    return revNum;
}

int main() {
    std::cout<<ReverseNumber(12345);
}