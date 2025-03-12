//4. Median of Two Sorted Arrays


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        vector<int>merge;
        for(int i=0;i<n;i++)
        {
            merge.push_back(nums1[i]);  //[1,2]

        }
        for(int i=0;i<n1;i++)
        {
            merge.push_back(nums2[i]);   //[1,2,3]
        }
        sort(merge.begin(),merge.end());
        int total=merge.size();   //TOTAL=3;
        if(total%2==1)         //3%2=1
        {
            return static_cast<double>(merge[total/2]);
        }
        else
        {
            int middle1=merge[total/2-1];
            int middle2=merge[total/2];
            return (static_cast<double>(middle1)+static_cast<double>(middle2))/2.0;
        }
    }
};


//INTPUT;
//NUMS1=[1,2] NUMS2=[3];
  //  OUTPUT;
//2.000000

