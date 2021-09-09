//Method 1
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     
        vector<int> v1;   
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[abs(nums[i])-1]>0){
                 nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            }         
            
        }
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>0){
                v1.push_back(i+1);
            }
           
            
        }
        return v1;
        
    }
};

//Method 2
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        set<int> s;
        vector<int> v1;
        for(auto n: nums){
            
            s.insert(n);
        }
        
        for(int i=1;i<=nums.size();i++){
            
            if(s.find(i) == s.end()){
                v1.push_back(i);
            }
        }
        return v1;
        
    }
};