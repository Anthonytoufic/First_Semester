#include <iostream>
using namespace std;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int S=10;
int BinarySrearch(int Num){
    int low=0;
    int high=S-1;
    int x=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==Num){
            x=mid;
        }if(arr[mid]<Num){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }return x;
}
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    int func=BinarySrearch(a);
    if(func==-1){
        cout<<"It does not exist"<<endl;
    }else{
        cout<<"It Exist"<<func<<endl;
    }

    return 0;
}
/*int linear(int n){
    int x=0;
    while(x<10&&ar[x]!=n){
        x++;
    }if(x>=10){
        x=-1;
    }return x;
}*/





