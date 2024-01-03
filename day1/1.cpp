class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> result(2, 0);
        int i;
        for (i = 0; i < n; i++) {
            int abs_val = abs(arr[i]);
            if (arr[abs_val - 1] > 0) {
                arr[abs_val - 1] = -arr[abs_val - 1];
            } else {
                result[0] = abs_val; 
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i] > 0) {
                result[1] = i + 1; 
                break;
            }
        }
        return result;
    }
};