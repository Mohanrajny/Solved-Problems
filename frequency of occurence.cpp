#include<bits/stdc++.h>
using namespace std;
struct item
{
    int index;
    int element;
    int frequency;
};
/*This function is used for step 1
of the algorithm i.e. normal sorting
on basis of numbers.*/
bool comp(item num1, item num2)
{
    return(num1.element < num2.element);
}
/*This function is used for step 3
of the algorithm i.e. sorting
on basis of frequency or count.*/
bool comp2(item num1, item num2)
{
    if (num1.frequency != num2.frequency)
        return (num1.frequency < num2.frequency);
    else
        return (num1.index > num2.index);
}
void sort_by_frequency(int arr[], int size)
{
    item num[size];
    //Initializing structures:
    for(int i = 0; i<size; ++i)
    {
        num[i].index = i;
        num[i].frequency = 0;
        num[i].element = arr[i];
    }
    /*Sort the structure elements according to elements.
    This is normal sorting.
    We used stable sort so relative order is maintained.*/
	stable_sort(num, num + size, comp);
	for(int i=0; i<size; ++i)
 	   cout<<num[i].element<<" ";
	cout<<endl; 
    /*Initializing frequency of
    first element as 1.*/
    num[0].frequency = 1;
    /*Counting occurrences i.e. noting
    frequency of remaining elements.*/
    for (int i = 1; i<size; ++i)
    {
        if(num[i].element == num[i-1].element)
        {
            num[i].frequency += num[i-1].frequency + 1;
            /*Set count of previous element as -1.
            We are doing this because we'll again sort on 
            the basis of frequency and we need just the 
            highest count of a particular number for
            that.*/
            num[i-1].frequency = -1;
            /*Since we need the very first occurrence
            of an element in case frequencies are same.*/
            num[i].index = num[i-1].index;
        }
        /*If previous element is not equal
        to current element, then we have
        landed on a new number.
        So set the count to 1 as we did for num[0].*/
        else num[i].frequency = 1;
    }
    /*Now we have the frequencies and first occurrence's
    index for each element.
    Now, we sort on the basis of frequency.*/
    stable_sort(num, num+size, comp2);
	for(int i=0; i<size; ++i)
       cout<<num[i].element<<" ";
    cout<<endl;
	//Overwriting required answer in original array
    for(int i = size-1, index = 0; i >= 0; --i)
        if(num[i].frequency != -1)
           for(int j=0; j<num[i].frequency; ++j)
                arr[index++] = num[i].element;
}
int main()
{
    int arr[] = {1,3,3,3,4,4,4,5,6,7,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort_by_frequency(arr, size);
    for(int i=0; i<size; ++i)
       cout<<arr[i]<<" ";
    return 0;
}
