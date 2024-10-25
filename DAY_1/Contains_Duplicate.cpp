class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // for(int i = 0;i<nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // sort(nums.begin(),nums.end());
        // for(int index = 1;index<nums.size();index++){
        //     if(nums[index] == nums[index-1]){
        //         return true;
        //     }
        // }
        // return false;'

         unordered_set < int > set ;

         for(int i = 0;i<nums.size();i++){
            set.insert (nums[i]);
         }

        if(set.size() < nums.size()){
            return true;
        }

        return false;
        

    }
};
