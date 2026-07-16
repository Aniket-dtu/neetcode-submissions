class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int size=weights.size();
        int maxi=0;
        for(int i=0;i<size;i++){
            maxi+=weights[i];
        }
        int l=*max_element(weights.begin(), weights.end());
        int r=maxi;
        while(l<r){
           int mid = l + (r - l) / 2;

            int load=0;
            int day=1;
            for(int weight : weights){
                if(load + weight > mid){
                    day++;
                    load = weight;
                }
                else{
                     load += weight;
                }
            }
            if(day<=days){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
};