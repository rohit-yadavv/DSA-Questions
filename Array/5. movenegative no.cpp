// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

// Approch 1 
void moveNegative(int arr[], int n){
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] < 0) { 
            if (i != j) 
                swap(arr[i], arr[j]); 
            j++; 
        } 
    } 
}


// Approch 2 (More efficient)

void moveNegative(int arr[], int n) {
    int low=0; int high=n-1;

    while(low<=high){
        if(arr[low]<0){
            low++;
        }else{
            swap(arr[low], arr[high]);
            high--;
        }
    }
}