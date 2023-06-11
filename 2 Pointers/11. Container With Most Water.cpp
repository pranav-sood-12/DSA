class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
    int i=0,j=n-1;
    int area=0,maxarea=-1;
    int k=n-1;
    while(i<j)
    {
        area=min(height[i],height[j])*k;
        if(height[i]<height[j])
        {
            i++;
        }
        else
            j--;
        
        k--;
        maxarea=max(maxarea,area);
    }
    
    return maxarea;
    }
};
