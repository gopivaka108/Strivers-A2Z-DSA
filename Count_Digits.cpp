#include<iostream>

int CountDigits(int n) {
    int count = 0;
    while(n>0) {
        n = n/10;
        count++;
    }
    return count;
}
int main() {
    std::cout<<CountDigits(123456789);
    return 0;
}