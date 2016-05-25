#include <iostream>
#include <chrono>

using namespace std;
// Returns location of key, or -1 if not found
int BinarySearch(int A[], int l, int r, int key)
{
    int m;
     while( l <= r )
    {
        m = l + (r-l)/2;
 
        if( A[m] == key ) // first comparison
            return m;
 
        if( A[m] < key ) // second comparison
            l = m + 1;
        else
            r = m - 1;
    }
 
    return -1;
}

int main()
{
     int i=0,x,size,ele;
     cout<<"Enter the number of element in array";
     cin>>size;
     int* a=new int[size];
     for(i=0;i<size;i++)
	 {
         cin>>x;
         a[i]=x;
              
     }
     cout<<"Enter the element to search for:";
     cin>>ele;
    x=BinarySearch(a,1,size,ele);
    if(x=-1)
		cout<<"Element does not exist!!!";
	else    
		cout<<"Position of element in an array is: "<<x+1;
	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;  	
}



