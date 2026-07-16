class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int size=nums.size();
        vector<int> right(size,0);
        vector<int> left(size,0);
        stack<int> st;
        int area=0;
        int carea=0;
        for(int i=size-1;i>=0;i--){
            while(st.size()!=0 && nums[st.top()]>=nums[i]){
                st.pop();
            }
            right[i]=st.empty()?size:st.top();
            st.push(i);
        }
        while(st.size()!=0){
            st.pop();
        }
        for(int i=0;i<size;i++){
            while(st.size()!=0 && nums[st.top()]>=nums[i]){
                st.pop();
            }
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        for(int i=0;i<size;i++){
            int w=right[i]-left[i]-1;
            carea=nums[i]*w;
            area=max(area,carea);

        }
        return area;

        
    }
};                                   