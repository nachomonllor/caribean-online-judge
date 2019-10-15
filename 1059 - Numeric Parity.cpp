http://coj.uci.cu/24h/problem.xhtml?pid=1059

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;
 
int main() {
    
   
    // bin(2147483647);
    int I;
    while(true) {
        scanf("%d", &I);
        
        if(I ==0) {
            break;   
        }
        
        std::vector<int> bin;
        int copia = I;
        int cont =0;
        while(copia > 0) {
          int dig= copia %2;
          bin.push_back(dig);
          if(dig == 1) {
                cont ++;
          }
          copia /= 2;   
        }
        
        printf("The parity of ");
        std::reverse(bin.begin(), bin.end());
        for(int i =0; i < bin.size(); i++) {
            printf("%d", bin[i]);   
        }
        printf(" is %d (mod 2).\n", cont);
 
    }
    
    
    system("pause");
    
    
 return 0;   
}
