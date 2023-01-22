// Write a C++ program to find out first n perfect number where n is the input from user.

#include<iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The first " << n << " perfect numbers are: " << endl;
    for (int i = 2; count < n; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
            count++;
        }
    }

    return 0;
}
