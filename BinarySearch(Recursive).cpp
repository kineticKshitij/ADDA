#include<iostream>
using namespace std;
int BinarySearch(int a[],int key,int min,int max){
	int mid;
	if(max<min){
		cout<<"\narray is empty: ";
		return 0;
	}
	 if(key<min || key>max){
	 	cout<<"\nElement not in array list: ";
	 	return key;
	 }
	 else{
	 mid =(min+max)/2;
	 if(a[mid]>key){
	 	return BinarySearch(a,key,min,mid-1);
	 }
	 else if(a[mid]<key){
	 	return BinarySearch(a,key,mid+1,max);
	 }
	 else
	 return mid;
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
cout<<BinarySearch(a,k,0,n);
}
