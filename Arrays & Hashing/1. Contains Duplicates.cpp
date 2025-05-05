class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //Define the set for inserting values in it
        set <int> Set;

        //Traverse input array
        for(auto &it : nums)
        {
            //cout << " " << it <<endl;
            //Check if it is already available in set
            if(Set.count(it)) 
                return true;// return expected bool-true if duplicate value came while traversing over input array

            Set.insert(it); 
        }

        return false;
        
    }
};