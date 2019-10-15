http://coj.uci.cu/24h/problem.xhtml?pid=1064
#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
   
    int H1, M1, H2, M2;
    
    while(true) {
      
      scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
      
      if(H1 == 0 && M1 == 0 && H2 == 0 && M2 ==0) {
          break;   
        }   
        
        int min1 = H1 * 60 + M1;
        int min2 = H2 * 60 + M2;


        if (min2 < min1) {
            int res = ((24 * 60) - min1) + min2;
            printf("%d\n" , res);
        }
        else {
            printf("%d\n", min2 - min1);
        }

    }
    
    
    system("pause");
    
  return 0;   
}

