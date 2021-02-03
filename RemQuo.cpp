#include<iostream>
using namespace std;
void remqo(int &a,int &b,int &c){
    while(a>=b){
        a=a-b;
        c++;
    }
}
int main()
{
    int q,w,e=0;
    cout<<"Entre the  number";
    cin>>q;
    cout<<"Enter the second";
    cin>>w;
    remqo(q,w,e);
    cout<<"The remainder is "<<q<<endl;
    cout<<"The quotient is "<<e<<endl;

    return 0;
}

