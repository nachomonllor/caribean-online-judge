http://coj.uci.cu/24h/problem.xhtml?pid=1933
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  
  int a,b;
  
  while(true) {
  
    scanf("%d %d", &a, &b);
    
    if(a==0&&b==0) {
        break;   
    }  
    printf("%d\n",a+b);
    
  }
  
 return 0;   
}
