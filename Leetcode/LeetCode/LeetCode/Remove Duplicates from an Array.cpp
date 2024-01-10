// working: 

// things to note:
// The first number will always be unique, i.e. 0. The number to start with is 1.
// Duplicate numbers appear directly after the element.
// 

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {

        int index = 1; // where we should place the number if it is unique.
        for (int i = 0; i < nums.size() - 1; ++i) // set the for loop along nums. Remember to -1 comparing the second last element to the last element.
            if (nums.at(i) != nums.at(i + 1))
            {
                nums.at(index++) = nums.at(i + 1); // post increment
            }
        return index;

    }
};