//add the library
#include<iostream>
using namespace std;

//function to find largest element
void largest(int arr[],int len) {
	int large=arr[0];
	for (int i=1; i<len; i++) {
		if (arr[i]>large) {
			large = arr[i];
		}
	}
	cout<<large<<" is the largest element of the array"<<endl<<endl;
}

//function to find smallest element
void smallest(int arr[],int len) {
	int small=arr[0];
	for (int i=1; i<len; i++) {
		if (arr[i]<small) {
			small = arr[i];
		}
	}
	cout<<small<<" is the smallest element of the array"<<endl<<endl;
}

//function to find the mean of the elements
void mean(int arr[],int len) {
	float sum=0;
	//finding the sum
	for (int i=0; i<len; i++) {
		sum+=arr[i];
	}
	cout<<"The mean of the elements of the array: "<<sum/len<<endl<<endl;
}

//function to find the median of the elements
void median(int arr[],int len) {
	int a[len];

	//sorting the array in increasing order
	for (int i=0; i<len; i++) {
		a[i]=arr[i];
	}

	for (int j=0; j<len-1; j++) {
		int c;
		for (int i=0; i<len-1; i++) {
			if (a[i+1]<a[i]) {
				c=a[i+1];
				a[i+1]=a[i];
				a[i]=c;
			}
		}
	}

	//finding the median of the elements
	if (len%2==0) {
		if (a[(len/2)]==a[(len/2)-1]) {
			cout<<"The median of this array is "<<a[len/2]<<endl<<endl;
		} else {
			cout<<"The medians of this array are "<<a[(len/2)-1]<<" and "<<a[(len/2)]<<endl<<endl;
		}
	} else {
		cout<<"The median of this array is "<<a[len/2]<<endl<<endl;
	}
}

//function to find the element of highest frequency
void freq(int arr[], int len) {
	int big=0;
	int arr1[len];
	for (int i=0; i<len; i++) {
		int c=0;
		for (int j=0; j<len && i!=j; j++) {
			if (arr[i]==arr[j]) {
				c+=1;
			}
		}
		arr1[i]=c;
		if (c>=big) {
			big=c;
		}
	}
	for (int k=0; k<len; k++) {
		if (big==arr1[k]){
			cout<<"The element '"<<arr[k]<<"' has the highest frequency of "<<big+1<<endl<<endl;
		}
	}
}
			


//main
int main() {
	//declaring variables
	int n;
	cout<<"Enter the number of the elements in the array: ";
	cin>>n;

	//declaring the array
	int array[n];

	//assigning elements to the array
	for (int i=0; i<n; i++) {
		int p;
		cout<<"Enter the "<<i+1<<"th element of array: ";
		cin>>p;
		array[i]=p;
	}
	cout<<endl;
	largest(array,n);
	smallest(array,n);
	mean(array,n);
	median(array,n);
	freq(array,n);
	return 7;
}
