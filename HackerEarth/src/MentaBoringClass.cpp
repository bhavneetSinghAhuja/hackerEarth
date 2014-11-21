/*
 * MentaBoringClass.cpp
 *
 *  Created on: Oct 25, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int set [1000000];

void boringClassUtil(){

	long int a, b,n, sum=0,temp;
	scanf("%ld %ld", &a, &b);
	int index;
	for(long int j=a;j<=b;j++){
		n=j;
		index=1;
		while (n%2 == 0)
		    {
		     	sum++;
		        n = n/2;
		    }
		temp=sqrt(n);
		for (long int i = set[index]; i <= temp; i++)
		    {
		        // While i divides n, print i and divide n
		        while (n%i == 0)
		        {
		            sum++;
		            n = n/i;
		        }
		    }

		 if (n > 2)
			 sum++;

		//		while(set[index]<=sqrt(j)){
//			if(n%set[index]==0){
//				sum++;
//				n=n/set[index];
//				cout<<sum<<" "<<n<<" "<<index<<" "<<set[index]<<endl;
//			}
//			else
//				index++;
//		}


	}

	printf("%ld\n",sum);

}

void boringClass(){

	long int t;
	scanf("%ld",&t);
	for(long int i=0;i<t;i++)
	boringClassUtil();

}
//int main(){
//	 for (int i=0; i<1000000; i++){
//	        set [i] = 0;
//	    }
//	    int set_size= 1000;
//	    set [set_size];
//	    set [0] = 2;
//	    set [1] = 3;
//	    int Ps = 0;
//	    int last = 2;
//
//	//    cout << 2 << " " << 3 << " ";
//
//	    for (int n=1; n<10000; n++){
//	        int t = 0;
//	        Ps = (n%2)+1+(3*n);
//	        for (int i=0; i==i; i++){
//	            if (set [i] == 0) break;
//	            if (Ps%set[i]==0){
//	                t=1;
//	                break;
//	            }
//	        }
//	        if (t==0){
////	            cout << Ps << " ";
//	            set [last] = Ps;
//	            last++;
//	        }
//	    }
//
//	boringClass(); return 0;}

