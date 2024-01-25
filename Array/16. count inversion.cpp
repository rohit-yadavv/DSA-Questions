// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

// https://leetcode.com/problems/reverse-pairs/description/

 
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    int merge(int arr[], int low, int mid, int high)
    {
        int count =0;
        int i, j, k;
        int tempArr[high - low + 1];
        i = low;
        j = mid + 1;
        k = 0;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                tempArr[k]=arr[i];
                i++;
            }else{
                tempArr[k]=arr[j];
                j++;
                // this is the only modification 
                // mid-i+1 because [2, 3, 5, 6] [1, 2, 2, 4, 4, 8]
                // now in this example if (3>2) 3 from first half and 2 from second half now as these are shorted so by default 5, 6 will also be greater then 1 so total swap will be (3, 2), (5, 2), (6, 2)

                count += (mid - i + 1);
            }
            k++;
        }
        while (i<=mid) {
            tempArr[k] = arr[i];
            i++;
            k++;
        }
        while (j<=mid) {
            tempArr[k] = arr[j];
            j++;
            k++;
        }
        for (int i = 0; i < k; i++) {
            arr[low+i] = tempArr[i];
        }
        return count;
    }
    
    int mergeSort(int arr[], int low, int high)
    {
        int count = 0;
        if (low < high)
        {
            int mid = (low + high) / 2;
            count += mergeSort(arr, low, mid);
            count += mergeSort(arr, mid + 1, high);
            count += merge(arr, low, mid, high);
        }
        return count;
    }

    int inversionCount(int arr[], int N)
    {
        return mergeSort(arr,0, N-1);
    }

};
  