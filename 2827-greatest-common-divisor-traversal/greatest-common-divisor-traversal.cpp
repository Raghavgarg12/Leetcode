class Solution {
public:
    int n; //store the size of the input vector (number of elements).
    vector<int> prime; // store prime numbers.
    vector<vector<int>> commonFactor; // 2D vector to store common factors for each number.
    vector<int> num_state; // Vector to store the state of each number (1, -1, or 2).

    vector<bool> isPrime; // Vector to check if a number is prime.

    void Sieve(int n){ // Sieve of Eratosthenes to find prime numbers up to n.
        // Time Complexity: O(n log log n)

        isPrime.assign(n+1, 1); // Initialize all numbers as prime.
        isPrime[0] = isPrime[1] = 0; // 0 and 1 are not prime.

        int n_sqrt = int(sqrt(n)); // Compute square root of n.

        for(int i=2; i<=n_sqrt; i++){
            if (isPrime[i]){
                for(int j=i*i ; j<=n; j+=i)
                    isPrime[j]=0; // Mark multiples of prime numbers as not prime.
            }
        }

        // prime.reserve((int)log(n)); // Reserve space for prime numbers.
        
        for(int i=2; i<=n; i++)
            if (isPrime[i]) prime.push_back(i); // Store prime numbers.
    }

    void build_commonFactor_path(auto& nums, int M) {
        // Build a 2D vector to store common factors for each number.
        // Mark whether a number is present or not in the input vector.

        num_state.assign(M+1, 0); // Initialize the state vector.

        commonFactor.resize(M+1, vector<int>()); // Resize the 2D vector.

        for (int x : nums)
            num_state[x] = 1; // Mark numbers from the input vector.

        for (int p : prime) {
            if (num_state[p] != 1)
                num_state[p] = -1; // Mark prime numbers not present in the input vector.

            for (int i = p*2; i <= M; i += p) {
                if (num_state[i] == 1) {
                    commonFactor[i].push_back(p); // Store common factors.
                    commonFactor[p].push_back(i); // Store the reverse connection.
                }
            }
        }
    }

    void dfs(int i, int& sz) {
        // Depth-first search to traverse common factors.
        // Mark visited numbers and count the size of the traversal.

        if (num_state[i] == 1 && i != 1)
            sz++;

        num_state[i] = 2; // Mark the current number as visited.

        for (int x : commonFactor[i]) {
            if (num_state[x] == 1 || num_state[x] == -1) {
                dfs(x, sz); // Recursive DFS.
            }
        }
    }

    bool canTraverseAllPairs(vector<int>& nums) {
        // Check if it is possible to traverse all pairs with a common factor.

        if (nums.size() == 1) return 1; // If there's only one element, return true.
        // Remove the multiple x, unordered_set is similar to set in Math
        unordered_set<int> numSet(nums.begin(), nums.end());

        if (numSet.count(1)) return 0; // If 1 is present, return false.

        int n = numSet.size(); // Number of unique elements.
        int M = *max_element(numSet.begin(), numSet.end()); // Maximum element.

        Sieve(M); // Generate prime numbers up to M.
        build_commonFactor_path(numSet, M); // Build common factors.

        for (int i : numSet) {
            if (num_state[i] == 1) {
                int sz = 0;
                dfs(i, sz); // Perform DFS on each unvisited element.
                if (sz == n) return 1; // If the traversal size is equal to the number of elements, return true.
            }
        }

        return 0; // If no traversal satisfies the condition, return false.
    }
};