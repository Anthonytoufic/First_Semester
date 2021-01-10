#include <iostream>
using namespace std ;
int main(){
    int count[6]={0,0,0,0,0,0};
    int leb[6]={1,5,10,20,50,100};
    int mon[18]={5,10,5,1,10,5,100,50,20,10,50,20,5,1,10,100,50,20};
    for(int i=0;i<18;i++){
        for(int x=0;x<6;x++){
            if(leb[x]==mon[i]){
                count[x]++;
            }
        }
    }
    for(int y=0;y<6;y++){
        cout<<"There is "<<leb[y]<<" "<<count[y]<<" times"<<endl;
    }
    
    system("pause") ;
    return 0 ;
}
