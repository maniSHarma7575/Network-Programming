//Author : Manish Sharma 
//File Created on 8/20/2019
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void unstuff(vector<int> v)
{
	vector<int> o;
		int i=0;
		int n=v.size();
	int count=0;
	while(i<n)
	{
	
	if(v[i]==0)
	{
		count=0;
	o.push_back(v[i]);
	}
	else
	{
	count++;
	if(count==5)
	{
		o.push_back(v[i]);
	count=0;
	i++;
	}
	else
	{
		o.push_back(v[i]);
	}
	}
	i++;
	}
	cout<<endl;
	for(auto it:o)
	{
	cout<<it<<" ";
	}
}

int main() {
	int n;

	cin>>n;
	vector<int> v;
	vector<int> o;
	for(int i=0;i<n;i++)
	{
	int a;
	cin>>a;
	v.push_back(a);
	}
	int i=0;
	int count=0;
	while(i<n)
	{
	o.push_back(v[i]);
	if(v[i]==0)
	{
	count=0;
	}
	else
	{
	count++;
	if(count==5)
	{
		count=0;
	o.push_back(0);
	}
	}
	i++;
	}
	for(auto it:o)
	{
	cout<<it<<" ";
	}
	unstuff(o);
	return 0;
}
