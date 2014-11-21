/*
 * RoysLife.cpp
 *
 *  Created on: Oct 31, 2014
 *      Author: bhavneet.ahuja
 */
#include<iostream>
#include <cstdio>
#include <string>
using namespace std;

int len=1440;
//int len=18;

int max(long int x, long int y)
{
	return x>y?x:y;
}

void process_s(string s)
{
	long int temp_count=0,perm_count=0,final_temp=0,final_perm=0;
	for(long int i=0;i<s.length();i++)
	{
		if(i%len==0)
		{
			temp_count=0;
			//continue;
		}
		if(s[i]=='C')
		{
			perm_count++;
			final_perm=max(perm_count,final_perm);
			//cout<<final_perm<<" "<<perm_count<<endl;
			temp_count++;
			final_temp=max(temp_count,final_temp);

		}
		else{
			perm_count=0;
			temp_count=0;
		}
	}
	cout<<final_temp<<" "<<final_perm<<endl;
}
void roy(){
	int n;
	cin>>n;
	string s,comp_s;
	for(int i=0;i<n;i++)
	{
	   cin>>s;
	   comp_s.append(s);
	}
	process_s(comp_s);
}
//int main(){roy();return 0;}

