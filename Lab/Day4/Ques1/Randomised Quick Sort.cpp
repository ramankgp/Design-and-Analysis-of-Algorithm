

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

int get_pivot(int vect[],int start,int end)
{
srand(time(NULL));
    int random = start + rand() % (end - start);
    swap(vect[random],vect[end]);
    int pivot = vect[end];
    int j = start-1;
   
    for(int i=start;i<end;i++)
    {
    if(vect[i]<=pivot)
    {
    j++;
    swap(vect[i],vect[j]);
}
}
j++;
swap(vect[end],vect[j]);
return(j);
}

void quicksort(int vect[],int start,int end)
{
if(start<end)
{
int pivot = get_pivot(vect,start,end);
quicksort(vect,start,pivot-1);
quicksort(vect,pivot+1,end);
}

return;
}

int main()
{
int n;
cin >> n;
int vect[n];
cout << "Enter the array = " << endl;
for(int i=0;i<n;i++) cin >> vect[i];
quicksort(vect,0,n-1);
cout << "After sorting = " << endl;
for(int i=0;i<n;i++) cout << vect[i] << " ";
cout << endl;
}
