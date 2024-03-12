#include<iostream>
using namespace std;
int BinarySearch(int a[],int key,int min,int max){
	int mid,f=0;
	if(max<min){
		cout<<"\narray is empty: ";
		return f;
	}
	 else{
	 mid =(min+max)/2;
	 if(a[mid]>key){
	 	return BinarySearch(a,key,min,mid-1);
	 }
	 
	 else if(a[mid]<key){
	 	return BinarySearch(a,key,mid+1,max);
	 }
	 else{
	 
	 f=1;
	 return f;}
	 
	 
	 }
}
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
if(BinarySearch(a,k,0,n)==0){
	cout<<"\nNot Found";
}
else{
	cout<<"\nFound";
}
}
