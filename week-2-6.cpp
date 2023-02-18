#include "bits/stdc++.h"
using namespace std;

void generatePalindrome(char num[], int len) {
    int mid = len / 2;
    bool leftSmaller = false;
    int i = mid - 1;
    int j = (len % 2) ? mid + 1 : mid;
    while(i >= 0 && num[i] == num[j]) {
        i--;
        j++;
    }
    if(i < 0 || num[i] < num[j]) {
        leftSmaller = true;
    }
    while(i >= 0) {
        num[j++] = num[i--];
    }
    if(leftSmaller) {
        int carry = 1;
        i = mid - 1;
        if(len % 2 == 1) {
            int digit = num[mid] - '0' + carry;
            carry = digit / 10;
            num[mid] = digit % 10 + '0';
            j = mid + 1;
        }
        else {
            j = mid;
        }
        while(i >= 0) {
            int digit = num[i] - '0' + carry;
            carry = digit / 10;
            num[i] = digit % 10 + '0';
            num[j] = num[i];
            i--;
            j++;
        }
    }
}

int main() {
    char num[] = "12345";
    int len = strlen(num);
    generatePalindrome(num, len);
    cout << "The next smallest palindrome is " << num << endl;
    return 0;
}

