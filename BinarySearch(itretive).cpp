#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"\nEnter size of array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	
	cout<<"\nEnter integer in ascending order: ";
	cin>>a[i];
}
cout<<endl;
for(int i=0;i<n;i++){
	cout<<a[i]<<"\t";
}
cout<<"\nEnter the element you want to search: ";
int k;
cin>>k;
int min=0,max=n,f=0;
while(max>=min){
int	mid=(min+max)/2;
	if(a[mid]==k){
		f=1;break;
	}
	else if(a[mid]<k)
	min=mid+1;
	
	else
	max=mid-1;
}
if(f==1){
	cout<<"\Found";
}
else cout<<"\nNot Found";
}
	
