//?  https://www.geeksforgeeks.org/problems/three-way-partitioning/1

class Solution{   
public:
    void threeWayPartition(vector<int>& arr, int a, int b)
    {
        int low = 0, high = arr.size() - 1, current=0;

        while (current <= high) {  

            if (arr[current] < a) {
                swap(arr[current], arr[low]);
                low++;
                current++;
            } else if (arr[current] > b) {
                swap(arr[current], arr[high]);
                high--; 
            }else{
                current++;
            }
        }
    }
};
