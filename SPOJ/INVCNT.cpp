#include <bits/stdc++.h>

using namespace std;

#define pb 									push_back
#define ll 									long long 
#define ull 								unsigned long long
#define ui 									unsigned int
#define us 									unsigned short
#define INF 								1001001001
#define PI 									3.1415926535897932384626
#define mp 									make_pair
#define fi 									first
#define se 									second
#define pb 									push_back
#define sz(a) 								int((a).size())
#define all(c) 								c.begin(), c.end()
#define sz(a)								int((a).size())
#define trs(container, it) 					for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
//This one is for set,map etc.
#define present(container, element) 		(container.find(element) != container.end())
//This one is for vectors
#define cpresent(container, element) 		(find(all(container),element) != container.end())
#define tr(c,i) 							for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)


typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 

int _mergeSort(int arr[], int temp[], int left, int right);  
int merge(int arr[], int temp[], int left, int mid, int right);  
  
/* This function sorts the input array and returns the  
number of inversions in the array */
int mergeSort(int arr[], int array_size)  
{  
    int temp[array_size];  
    return _mergeSort(arr, temp, 0, array_size - 1);  
}  
  
/* An auxiliary recursive function that sorts the input array and  
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)  
{  
    int mid, inv_count = 0;  
    if (right > left)  
    {  
        /* Divide the array into two parts and  
        call _mergeSortAndCountInv()  
        for each of the parts */
        mid = (right + left) / 2;  
  
        /* Inversion count will be sum of  
        inversions in left-part, right-part  
        and number of inversions in merging */
        inv_count = _mergeSort(arr, temp, left, mid);  
        inv_count += _mergeSort(arr, temp, mid + 1, right);  
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);  
    }  
    return inv_count;  
}  
  
/* This funt merges two sorted arrays  
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left,  
                        int mid, int right)  
{  
    int i, j, k;  
    int inv_count = 0;  
  
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right))  
    {  
        if (arr[i] <= arr[j]) 
        {  
            temp[k++] = arr[i++];  
        }  
        else 
        {  
            temp[k++] = arr[j++];  
  
            /* this is tricky -- see above  
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);  
        }  
    }  
  
    /* Copy the remaining elements of left subarray  
(if there are any) to temp*/
    while (i <= mid - 1)  
        temp[k++] = arr[i++];  
  
    /* Copy the remaining elements of right subarray  
(if there are any) to temp*/
    while (j <= right)  
        temp[k++] = arr[j++];  
  
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)  
        arr[i] = temp[i];  
  
    return inv_count;  
} 

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int test; cin >> test;
    while(test--){
    	int values; cin >> values;
    	 int arr[values];
    	for (int i = 0; i < values; i++)
    	{
    		cin >> arr[i];
    	}

    	int answer =mergeSort(arr, values);
    	cout << answer << endl;


    }
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}