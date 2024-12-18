class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
            // Create a minheap (priority queue).
        std::priority_queue<long long, std::vector<long long>, std::greater<long long>> minHeap(arr.begin(), arr.end());
        
        long long totalCost = 0;
        
        // Keep combining ropes until only one rope remains.
        while (minHeap.size() > 1) {
            // Extract the two smallest ropes.
            long long first = minHeap.top();
            minHeap.pop();
            long long second = minHeap.top();
            minHeap.pop();
            
            // Combine the ropes and add the cost.
            long long cost = first + second;
            totalCost += cost;
            
            // Push the combined rope back into the heap.
            minHeap.push(cost);
        }
        
        return totalCost;
    
    }
};
