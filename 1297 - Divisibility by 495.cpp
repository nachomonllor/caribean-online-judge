http://coj.uci.cu/24h/problem.xhtml?pid=1297


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
        
        string N;
        cin >> N;
        //int sumDigits = 0;
        int sumPar = 0, sumImpar = 0;
        for (int i = 0; i < N.size() ; i++)
        {
            if (i % 2 == 0)
            {
                sumPar +=  N[i] - '0';//int.Parse(N[i].ToString());
            }
            else
            {
                sumImpar += N[i] - '0'; //int.Parse(N[i].ToString());
            }

        }

        bool divPor11 = false;
        if (sumPar - sumImpar == 0 || (sumPar - sumImpar) % 11 == 0)
        {
            divPor11 = true;
        }

        bool divPor5 = false;
        if ( (N[N.size()- 1] - '0') %5 ==0)
        {
            divPor5 = true;
        }

        bool divPor9 = false;
        if ((sumImpar + sumPar) % 9 == 0)
        {
            divPor9 = true;
        }

        if (divPor11 && divPor5 && divPor9)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
   
    
    system("pause");
    
    
 return 0;   
}


