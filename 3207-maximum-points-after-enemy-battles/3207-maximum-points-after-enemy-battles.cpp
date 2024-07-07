class Solution {
public:
    long long maximumPoints(std::vector<int>& arr, int currentEnergy) 
    {
        sort(arr.begin(), arr.end());
        
        
        long long total = 0;
        total = std::accumulate(arr.begin(), arr.end(), 0LL);
        total -= arr[0];
        
      
         long long points = 0;
        
        if (currentEnergy >= arr[0]) {
            points++;
            currentEnergy -= arr[0];
        }

        if (points >= 1) {
            total += currentEnergy;
            points += total / arr[0];
        }

        return points;
    }
};