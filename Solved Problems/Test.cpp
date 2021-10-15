#include<bits/stdc++.h>

using namespace std;

int main()
{
	map<char, list<char>> c;
	c['A'].push_back('B');
	c['A'].push_back('S');
	c['A'].push_back('D');
	vector<char> ch;
	ch.push_back('A');
	ch.push_back('B');
	ch.push_back('C');

	int x=5, y=5, z=5;
	cout<<(++z+y-1-y+z+x++);
}

