http://coj.uci.cu/24h/problem.xhtml?pid=1028
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> ans;

int main() {
	string s1,s2;
	int i,j,b,c,d,e,f;
	while(cin)
	{
		cin>>s1>>s2;
		b=0;
		for(i=0;i<s2.size();i++)
		{
			if(s2[i]==s1[b])
				b++;
			if(b==s1.size())
				break;
 
		}
		if(b==s1.size())
			ans.push_back("Yes");
		else
			ans.push_back("No");
	}
	for(i=0;i<ans.size()-1;i++)
		cout<<ans[i]<<endl;
	return 0;
}
