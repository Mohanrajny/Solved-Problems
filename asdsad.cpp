#include<iostream>
using namespace std;
struct item
{
	int element;
	int freq;
	int index;
}
bool comp(item num1,item num2)
{
	return num1.element<num2.element2;
}

bool comp2(item num1,item num2)
{
	if(num1.freq!=num2.freq)
	{
		return(num1.freq<num2.freq);
	}
	else 
	{
		return(num1.index<num2.index);
	}
}
void  sort_by_freq()
{
	item num[size];
	for
}

int main()
{
	int arr[]={1,2,2,5,1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort_by_freq(arr);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}

}
