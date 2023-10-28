class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();
      int res=0;
      int left=0,right=n-1;
      int maxleft=0,maxright=0;
      while(left<=right){
          if(height[left]<=height[right]){
              if(height[left]>=maxleft)
              maxleft=height[left];
              else
                  res=res+maxleft-height[left];
                  left++;
              
          }
          else{
              if(height[right]>=maxright)
              maxright=height[right];
              else
                  res=res+maxright-height[right];
                  right--;
              
          }

      }return res;  
    }
};