class Solution {
public:
    vector<int> twoSum_AnotherApproach(vector <int> &nums, int target)
    {
        // Algo/ Intution
        //1. Before sorting note down the positions 
        //2. Sort the array
        //3. L = 0 and R = nums.size-1
        //4. if nums[L] + nums[R] == target return the result 
        //5. if nums[L] + nums[R] < target then Increment L 
        //6. if nums[L] + nums[R] > target then Decrement R
        //7. Loop till L<R

        vector <pair<int, int>> pos;
        for(int i = 0 ; i < nums.size(); i++)
        {
            pos.push_back({nums[i], i});
        }

        sort(pos.begin(), pos.end());

        int L = 0;
        int R = nums.size()-1;
        vector <int> res;

        while(L < R)
        {
            if(pos[L].first + pos[R].first == target)
            {
                //return the res if found with the positions pushed 
                res.push_back(pos[L].second);
                res.push_back(pos[R].second);
                return res;
            }

            if(pos[L].first + pos[R].first < target)
                L++;
            else
                R--;
        }
        return res;

        //Time Complexity: O(N)
        //Space Complexity: O(N)
         
    }
    vector<int> twoSum(vector<int>& nums, int target) {

        //There are two approaches to solve the problem
        // 1. Two Sum by using vector: twoSum_AnotherApproach()
        // 2. Two Sum by using Map
        return twoSum_AnotherApproach(nums, target);

        //The below one is two sum by using MAP

        // Algo/ Intution
        // 1. Declare map of nums[i] and pos in
        // 2. Store elements of nums as keys and positions of nums[i] as values in unordered_map by traversing the nums
        // 3. Again start traversing in map from start as (auto &currElement: unordered_map)
        // 4. check (target - currElement) present in map or not
        // 5. if present the return its position
        // 6. if not go to next element

        int L = 0, R = 0, currSum;
        vector <int> soln; 
        unordered_map <int, int> map;



        for(L = 0 ; L < nums.size(); L++)
        {
            
            if(map.find(target - nums[L]) != map.end())
            {
                soln.push_back(L);
                auto it = map.find(target - nums[L]);

                soln.push_back(it->second);
                return soln;

            }
            map[nums[L]] = L;

        }

        return soln;
       
        
        
    }
};