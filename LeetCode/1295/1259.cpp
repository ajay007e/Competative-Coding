class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return accumulate(nums.cbegin(), nums.cend(), 0,
            [](auto a, auto b) {
                return a + (to_string(b).size() % 2 == 0);
        });
    }
};