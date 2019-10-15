http://coj.uci.cu/24h/problem.xhtml?pid=1004

#include <iostream>
#include <stdio.h>
 
#define ll long long int
 
using namespace std;
 
int main() {
   
    int T;
    scanf("%d", &T);
   
    ll N, M;
   
    while( T -- ) {
        scanf("%lld %lld", &N, &M);
       
        if(N== M) {
           if(N%2==0) {
              printf("L\n");  
           }else {
              printf("R\n");  
           }      
        }
       
        if(N > M) {
            if(M%2==0) {
                printf("U\n");
            }
            if(M%2!=0) {  
                printf("D\n");
            }
        }
        if(N < M) {
            if(N%2==0){  
                printf("L\n");
            }else{
                printf("R\n");  
            }
           
        }
             
        //printf("%lld %lld\n", N, M);
    }
   
    system("pause");
   
   
 return 0;  
}
