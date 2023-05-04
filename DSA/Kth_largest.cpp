#include <bits/stdc++.h>
using namespace std;
class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int size;
    KthLargest(int k, vector<int> &nums)
    {
        this->size = k;
        if (nums.size() >= k)
        {
            for (int i = 0; i < k; i++)
            {
                pq.push(nums[i]);
            }
            for (int i = k; i < nums.size(); i++)
            {
                pq.push(nums[i]);
                if (pq.size() > size)
                {
                    pq.pop();
                }
            }
        }
    }

    int add(int val)
    {
        if(pq.empty())
        {
            cout << "Hi" << endl;
        }
        pq.push(val);
        cout << pq.top() << endl;
        cout << pq.size() << endl;
        if (pq.size() > this->size)
        {
            pq.pop();
            cout << pq.top() << endl;
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{
    vector<int> nums = {-2};
    KthLargest* obj = new KthLargest(1, nums);
    cout << obj -> add(-3) << endl;
}