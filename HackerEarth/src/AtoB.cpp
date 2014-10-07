/*
 * AtoB.cpp
 *
 *  Created on: Sep 28, 2014
 *      Author: bhavneet.ahuja
 */

//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void a2b(){
//
//}
//
//int main(){a2b();return 0;}



#include <iostream>
#include<string>
#include<vector>
using namespace std;

unsigned  long int process_a(vector<unsigned long int> A,unsigned int id)
{
 cout<<id;
  long int MOD=1000000007;
 unsigned long int res=0;
 vector<long int> B;
 int N=A.size();
 B.resize(N);
 for(int i=1;i<=N;i++)
 {
   B[i]=1;
   for(int j=1;j<=N;j++)
   {
       if(i!=j)
       {
           B[i]?:((B[i]%MOD)*(A[j]%MOD))%MOD;
       }
       cout<<B[i]<<"-->";
   }
 }
 for(int i=1;i<=N;i++)
  // cout<<B[i]<<"-->";
 cout<<endl;

 return (B[id]%MOD);
}

unsigned long int get_v(string s,unsigned int &id, unsigned long int &v)
{
id=0;v=0;
int spaces=0;
for(int i=2;i<s.length();i++)
{
if(s[i]!=' ')
 {

 	if(spaces==0)
 	id=id*10+(s[i]-48);
 	else
 	v=v*10+(s[i]-48);
 }
else
  spaces=1;

}
 return v;
}
//
//int main()
//{
//   vector<unsigned long int> a;
//  // vector<unsigned long int> b;
//  unsigned long int v=0;
// unsigned int n,q,id=0;
// int c;
//   cin>>n;
//   a.resize(n+1);
//   a[0]=0;
//  // b.resize(n+1);
//   for(int i=1;i<=n;i++)
//   {
//   	cin>>a[i];
//   }
//   cin>>q;
//   while(q--)
//   {
//
//   cin>>c;
//   if(c==0)
//     {
//
//     	cin>>id>>v;
//     	a[id]=v;
//     }
//   else
//     {
//     	cin>>id;
//     	cout<<process_a(a,id)<<endl;
//     }
//
//    // cout<<id<<"-->"<<v<<endl;
//   id=0;v=0;
//   }
//   return 0;
//}
