http://coj.uci.cu/24h/problem.xhtml?pid=1166

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;
 
int main() {
    
    
    int T;
    scanf("%d", &T);
    
    while(T -- ) {
        
        int N;
        scanf("%d", &N);
        int pares = 0, impares = 0;
        //int arr[N];
        for(int i = 0; i < N; i++) {
            //scanf("%d", &arr[i]);   
            int elem;
            scanf("%d", &elem);
            
            if(elem % 2==0) {
                pares ++;
            } else {
                impares ++;
            }
                
        }
        
        printf("%d even and %d odd.\n", pares, impares);
        
    }
   
    
    system("pause");
    
    
 return 0;   
}
