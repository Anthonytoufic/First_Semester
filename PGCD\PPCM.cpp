#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void pgcd(int a,int b){
    int i;
    int min;
    int max;
    if(a<b){
        min=a;
        max=b;
    }else{
        min=b;
        max=a;
    }i=min;
    while(max%i!=0||min%i!=0){
        i--;
    }cout<< i;
}
int ppcm(int a,int b){
    int i;
    int min;
    int max;
    if(a<b){
        min=a;
        max=b;
    }else{
        min=b;
        max=a;
    }i=max;
    while(i%max!=0||i%min!=0){
        i++;
    }return i;
}
int main()
{
    int a,b,choice;
    do{
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second:";
        cin>>b;
        cout<<"Enter 1 for pgcd//2 for ppcm//0 to quit";
        cin>>choice;
        switch(choice){
            case 1:
            pgcd(a,b);
            cout<<endl;
            break;
            case 2:
            cout<<ppcm(a,b)<<endl;
            break;
        }
    }while(choice!=0);

    return 0;
}

