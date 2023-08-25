class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //reverse iteration
        int right=-1;
        int newmax;
        for(int i=arr.size()-1;i>=0;i--)
        {
            newmax=max(arr[i],right);
            arr[i]=right;
            right=newmax;
        }
        return arr;
    }
};