double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double res=0,count=0;
    int num,p,i;
    num=nums1Size+nums2Size;
    if(num%2==0){
        p=num/2;
        for(i=1;i<=p+1;i++){
            if (nums1Size<=0){
                count=*nums2;
                nums2++;
                nums2Size--;
            }
            else if (nums2Size<=0)
            {
                count=*nums1;
                nums1++;
                nums1Size--;
            }
            else if (*nums1>*nums2){
                count=*nums2;
                nums2++;
                nums2Size--;
            }
            else {//*nums1<=*nums2
                count=*nums1;
                nums1++;
                nums1Size--;
            }
            if(i==p||i==p+1){
                res+=count;
            }
        }
        res/=2;
        
    }
    else{
        p=(num+1)/2;
        for(i=1;i<=p;i++){
            if (nums1Size<=0){
                count=*nums2;
                nums2++;
                nums2Size--;
            }
            else if (nums2Size<=0)
            {
                count=*nums1;
                nums1++;
                nums1Size--;
            }
            else if (*nums1>*nums2){
                count=*nums2;
                nums2++;
                nums2Size--;
            }
            else {//*nums1<=*nums2
                count=*nums1;
                nums1++;
                nums1Size--;
            }
            if(i==p){
                res+=count;
            }
        }
    }
    return res;
}
