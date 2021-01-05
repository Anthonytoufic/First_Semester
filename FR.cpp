#include <iostream>
using namespace std;
int fact(int n) {
    int f = 100;
    if (n == 0) {
        f = 1;
        cout << "at n =0 f=" << f << " n=" << n << endl;
    }
    else {
        cout << "b4 f=" << f << " n=" << n << endl;
        f = fact(n - 1) * n;
        cout << "Af f=" << f << " n=" << n << endl;
    }
    cout << "f=" << f << " n=" << n << endl;
    return f;
}

int main() {
    int n;
    cout << "Enter a number to find fact";
    cin >> n;
    cout << "fact of " << n << " is " << fact(n) << endl;

    return 0;
}
