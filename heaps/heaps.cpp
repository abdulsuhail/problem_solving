#include <iostream>
using namespace std;

void max_heapify(int arr[],int i,int n)
{
	int l = 2*i;
	int r = 2*i+1;
	int largest;
	if(l<=n && arr[l] > arr[i])
		largest = l;
	else
		largest = i;
	if(r<= n && arr[r] > largest)
		largest = r;
		
	if(i != largest)
	{
		int t = arr[i];
		arr[i] = arr[largest];
		arr[largest] = t;
		max_heapify(arr,largest,n);
	}
}
void build_max_heap(int arr[], int n)
{
	for(int i=n/2;i>=1;i--)
	{
		max_heapify(arr,i,n);
	}
}
int main() {
	
	int n;
	cin>>n;
	int heap[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>heap[i];
	}
	build_max_heap(heap,n);
	for(int i=1;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
	
	
	return 0;
}