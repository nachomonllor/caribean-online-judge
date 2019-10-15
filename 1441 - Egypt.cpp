http://coj.uci.cu/24h/problem.xhtml?pid=1441
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
   
    
    while(true) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
     
        if(a == 0 && b == 0 && c == 0) {
          break;   
        }
        
        std::vector<int> lados;
        lados.push_back(a);
        lados.push_back(b);
        lados.push_back(c);
        
        std::sort(lados.begin(), lados.end());
    
        
        if(lados[0] * lados[0] + lados[1] * lados[1] == lados[2] * lados[2]) {
            printf("right\n");  
        } else {
            printf("wrong\n");
        }
        
    }
    system("pause");
    
  return 0;   
}

