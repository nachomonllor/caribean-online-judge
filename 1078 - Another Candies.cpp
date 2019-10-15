http://coj.uci.cu/24h/problem.xhtml?pid=1078
#include <iostream>
#include <stdio.h>

#define ll long long int

using namespace std;

int main() {
    
    ll T ;
     cin >> T;//scanf("%lld", &T);

    while (T--)
    {
        //printf("\n");
        int N ;
        cin >> N; //scanf("%d", &N);
        
        ll sumCaramelos = 0;
        for (int i = 0; i < N; i++)
        {
            ll caramelo;
            cin >> caramelo;  //scanf("%lld", &caramelo);
            sumCaramelos += caramelo;
        }
        
        if (sumCaramelos % N == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

 return 0;   
}
