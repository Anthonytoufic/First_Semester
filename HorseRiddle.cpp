#include <iostream>
using namespace std ;
int main(){
     int horses[13] = {1,2,3,4,5,6,0, 8,9,10,11,12,13 } ;
     int x=6 , i ;
     do {
          if ( horses[x-2]>0 && horses[x-2]<7 && horses[x-1]>7 )
          {
               // a horse should not jump over a horse from the same side 
               horses[x]=horses[x-2] ; // when the horse jumps his cell become x(the zero s cell ) 
               horses[x-2]=0 ; // and he should be replaced by a zero 
               x=x-2;
          }// a horse of grp left jumps if it is located 2 cells before zero
          else
          if ( horses[x+2]>7 && horses[x+1]<7)
          {
               horses[x]= horses[x+2] ;
               horses[x+2]= 0 ;
               x=x+2;
          } 
          //a horse from the right grp jumps if it is located 2 cells after zero 
          else
          { // move 
          if (horses[12]>7 )
          {
               if( horses[x+1]>7 && horses[x-1] < 7 && horses[x+2]>7 )
               {
                    horses[x]=horses[x+1] ;
                    horses[x+1]=0 ;
                    x=x+1;
                    /* if a horse from the left side is located 1 cell before 0 it moves 
                    a horse should not move toward a horse from the same side */
                    
               }
               else
               if( horses[x-1] <7 && horses[x+1] > 7 )
               {
                    horses[x]=horses[x-1] ;
                    horses[x-1]=0 ;
                    x=x-1;
                    /*
                    if a horse from the right side is located 1 cell after zero it moves to take the place of zero 
                    and zero takes the horse s place 
                     */
                    
               }
               
          }
          else 
          {
               if (horses[x+1]>7 && horses[x+1]<=13 )
               {
                    horses[x]=horses[x+1] ;
                    horses[x+1]=0 ;
                    x=x+1;
                    
               }
               else
               if (horses[x-1] < 7 )
               {
                    horses[x]=horses[x-1] ;
                    horses[x-1]=0 ;
                    x=x-1;
                    
               }

               
          }
               
          }
          for ( i=0 ; i<=12 ; i++ )
          cout << horses[i] << " ; " ;
          cout << " " << endl ;
          
     }while ( horses[0] !=8 || horses[7] != 1 || horses[5]!= 13 ) ; /* this loop stops when the last horse of the left side arrive to the int place of the first horse of the right grp 
     and when the first of right arrives to the place of the last of left grp 
     and when the last horse of the right arrive to the int place of the first one of grp left 
     */ 
     system("pause") ;
     return 0 ;

}
