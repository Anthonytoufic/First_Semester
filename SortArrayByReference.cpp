#include<iostream>
using namespace std;
void sor(int c[],int sizes){
    int tmp;
    for (int i = 0; i < sizes-1; i++)
    {
        for (int j = i + 1; j < sizes; j++)
        {
            if (c[i] > c[j])
            {
                tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }
}
int main()
{
    int arr[10]={14,34,23,11,45,32,13,53,76,39};
    sor(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
