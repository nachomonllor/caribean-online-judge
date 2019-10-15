http://coj.uci.cu/24h/problem.xhtml?pid=1177#

#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
   
    int G;
    string cadena;
 
    while (true)
    {
     
        cin >> G >> cadena;
 
        if (G == 0)
        {
            break;
        }
 
        int len_grupo = cadena.size() / G;
 
        string answer = "";
        for (int i = 0; i < cadena.size(); i += len_grupo)
        {
            //Console.WriteLine(i);
            string grupo = cadena.substr(i, len_grupo);
            string rev = "";
            for (int j = len_grupo -1; j >=0; j--)
            {
                rev += grupo[j];
            }
            answer += rev;
            //Console.WriteLine(grupo);
 
        }
        //Console.WriteLine(answer);
        cout << answer << endl;
 
    }
   
  return 0;  
}

