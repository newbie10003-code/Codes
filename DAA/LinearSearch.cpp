// #include<bits/stdc++.h>
// using namespace std;

// int linearSearch(vector<int>& nums, int target)
// {
//     int size = nums.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Comparison: " << i + 1 << endl;
//         if (target == nums[i])
//         {
//             return i + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> nums;
//     int m; cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int temp;
//         cin >> temp;
//         nums.push_back(temp);
//     }
//     int target; cin >> target;
//     cout << "Answer: " << linearSearch(nums, target) << endl;
//     return 0;
// }
#include<bits/stdc++.h>

int searchResult(std::vector<int> arr, int k){
    std::vector<int>::iterator it;
    it = std::find(arr.begin(), arr.end(), k);
    if(it != arr.end())
        return (it - arr.begin());
    else
        return -1;
}

int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 4;
    std::cout << searchResult(arr, k) << std::endl;
    return 0;
}