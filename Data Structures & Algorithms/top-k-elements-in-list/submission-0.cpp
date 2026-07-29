class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(auto& n : nums){
            freq[n] += 1;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> heap;
        for(auto& [n,f] : freq){
            heap.push({f,n});
            if(heap.size() > k){
                heap.pop();
            }
        }
        vector<int> ans;
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;

    }
};
