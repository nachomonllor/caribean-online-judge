http://coj.uci.cu/24h/problem.xhtml?pid=1050

#include <iostream>
#include <stdio.h>

using namespace std;

int gcdEuclid(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcdEuclid(b % a, a);
}

bool sonCoprimos(int a, int b)
{
    return gcdEuclid(a, b) == 1;
}

int main() {
    
    int N ;
    scanf("%d", &N);

    int cont = 0;
    for (int i = 1; i <= N; i++)
    {
        if (sonCoprimos(i, N))
        {
            cont++;
        }
    }

    printf("%d\n" , cont);
    
    system("pause");
    
  return 0;   
}
