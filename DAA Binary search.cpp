#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;

main(){
	int a[10];
	int x;
	int lb=0,mp;
	int lim;
		cout<<"Input the limit: "<<endl;
		cin>>lim;
			
	
	cout<<"Enter any Array elements"<<endl;
	for(int i=0;i<lim;i++){
	cin>>a[i];
	}
	cout<<"Enter Element to be searched"<<endl;
	cin>>x;
	
	int ub=lim;
	sort(a,a+lim);
	mp=lb+(ub+lb)/2;
	
	
	while(lb<=ub){
		if(a[mp]==x){
			cout<<" Found at "<<mp<<endl;
			break;
			}
		else if(a[mp]>x){
			ub=mp-1;
			cout<<"sas"<<endl;
		}	
		else if(a[mp]<x){
		lb=mp+1;
		cout<<"123"<<endl;
	}
	mp=lb+(ub+lb)/2;
		}
	}
	
