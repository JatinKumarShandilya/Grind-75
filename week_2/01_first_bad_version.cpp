// leetcode q - 278

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // binary search
        int start = 1,end = n,mid = start+(end-start)/2,ans=0;
        while(start<=end){
            if(isBadVersion(mid)){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;       // because mid tk toh shi hi chal rha h
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
};