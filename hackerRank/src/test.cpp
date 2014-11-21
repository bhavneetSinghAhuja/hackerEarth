/*
 * test.cpp
 *
 *  Created on: Oct 15, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>

using namespace std;

void findMajority(){
    int n;

    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int candidate=a[n/2];
    int l=0, h=n-1,m=(h+l)/2,start=0, end=n-1;
    //find the start of the candidate
    while(l<h){
        if(a[m]==candidate)
        {
            if(a[m-1]!=candidate){
                start=m;break;}
            else{
                h=m-1;
            }
        }
        else if(a[m]<candidate){
            if(a[m+1]==candidate){
                start=m+1;break;
            }
            else{
                l=m+1;
            }

        }
        else{
            h=m-1;
        }
        m=(h+l)/2;
     }

    l=0;
    h=n-1;
    m=(h+l)/2;
    //find the end of the candidate
    while(l<h){
        if(a[m]==candidate){
            if(a[m+1]!=candidate){
            end=m;break;}//end=m+1;break;}
            else
            l=m+1;
        }
        else if(a[m]<candidate){
            l=m+1;
        }
        else{
            if(a[m-1]==candidate){
            end=m-1;break;}
            else
            h=m-1;
        }
        m=(h+l)/2;
    }

    if((end-start+1)>(n/2))
        cout<<candidate<<endl;
    else
        cout<<"-1"<<endl;
}
int main(){findMajority();return 0;}



