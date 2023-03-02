#include <iostream>
#include <vector>
#include <string>

using namespace std;

string reverse_str(string s)
{
	int size = s.size();
	for (int i=0; i<size/2; i++)
	{
		char tmp = s[i];
		s[i] = s[size-1-i];
		s[size-1-i] = tmp;
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	vector <string> vc;
	for (int i=0; i<n; i++)
	{
		string str;
		cin >> str;
		vc.push_back(str);
	}
	vector <string> res;
	for (int i=0; i<n; i++)
	{
		res.push_back(reverse_str(vc[i]));
	}
	string res_;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (vc[i] == res[j])
			{
				res_ = vc[i];
				cout << res_.size() << " " << res_[(res_.size())/2];
				return 0;
			}
		}
	}
}
