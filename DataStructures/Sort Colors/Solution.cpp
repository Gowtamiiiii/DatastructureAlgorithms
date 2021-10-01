class Solution {
public:
    void sortColors(vector<int>& num) 
{
    int low=0;
    int mid=0;
    int high=num.size()-1 ;
    int i;
    while(mid<=high)
    {
        switch(num[mid])
        {
            case 0:
                swap(num[low++],num[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(num[mid],num[high--]);
        }
    }
    
}
};
