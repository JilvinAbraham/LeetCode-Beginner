class Solution {
public:
    vector<vector<int>> gsubset;
    
    void generate(vector<int>& subset,int i,vector<int>& nums){
        if(i==nums.size()){
            //if(find(gsubset.begin(),gsubset.end(),subset)==gsubset.end()){
                 gsubset.push_back(subset);
                 return;
            //}
           
        }
        generate(subset,i+1,nums);
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int> subset;
        generate(subset,0,nums);
        return gsubset;
        
    }
};