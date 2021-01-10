#include <iostream>
using namespace std;
int n[10];
int e;

void ntr()
{
    int ctr;
    for (ctr = 0; ctr <= 9; ctr++) {
        do {
            cout << "Please enter a value betwen 40 and 100 the " << ctr << " : ";
            cin >> n[ctr];
        } while (n[ctr] < 40 || n[ctr]>100);
    }
}


void dspl() {
    int ctr;
    for (ctr = 0; ctr <= 9; ctr++) {
        cout << n[ctr] << endl;;
    }
}

void mdf() {
    int ctr;
    do {
        cout << "please enter a position betwen 0 and 9 :";
        cin >> ctr;
    } while (ctr < 0 || ctr>9);
    do {
        cout << "you asked to change the value " << n[ctr] << "which is in position :" << ctr << endl;
        cout << "Enter the new value :";
        cin >> n[ctr];
    } while (n[ctr] < 40 || n[ctr]>100);
}
void fnd(int f) {
    int i = 0;
    if (find(begin(n), end(n), f) != end(n)) {
        cout << "It exists ";
        while (n[i] != f)
            i++;
        cout << "His index is " << i << endl;
    }
    else
        cout << "It does not exist ";
}
void count_occurrences(int y)
{
    int result = 0;
    for (int i = 0; i <= 9; i++)
        if (y == n[i])
            result++;
    cout << result << endl;
}
void CountingEvenOdd()
{
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i <= 9; i++) {
        if (n[i] % 2 == 1)
            odd_count++;
        else
            even_count++;
    }

    cout << "Number of even elements = " << even_count
        << "\nNumber of odd elements = " << odd_count << endl;
}
void rands(){
    srand((unsigned)time(0))
    for (int i = 0; i <=9; i++) {
        n[i] = rand() % (100 - 40) + 40;
        cout << n[i] << endl;
    }
}

int main()
{
    int opt;
    int q, e;
    do {
        cout << "1 to enter values" << endl;
        cout << "2 to generate 10 random value" << endl;
        cout << "3 to display the content of the array" << endl;
        cout << "4 to modifie" << endl;
        cout << "5 to see how many odd and even numbers" << endl;
        cout << "6 to occurence number" << endl;
        cout << "7 to find" << endl;
        cout << "0 to quit" << endl;
        cout << "please enter your choice : ";
        cin >> opt;
        switch (opt) {
        case 1:
            ntr();
            break;
        case 2:
            rands();
            break;
        case 3:
            dspl();
            break;
        case 4:
            mdf();
            break;
        case 7:
            cout << "Enter the number you need to find:";
            cin >> q;
            fnd(q);
            break;
        case 6:
            cout << "enter the number:";
            cin >> e;
            count_occurrences(e);
            break;
        case 5:
            CountingEvenOdd();
            break;
        }
    } while (opt != 0);
    return 0;
}
