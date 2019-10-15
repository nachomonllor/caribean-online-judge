http://coj.uci.cu/24h/problem.xhtml?pid=1805

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

int main() {
    
  ll A, B;
  scanf("%lld %lld", &A, &B);
  
  printf("%lld\n", (A+B) + (A-B) + (B+A) + (B-A));
 
  system("pause");
    
 return 0;   
}

