class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
          unordered_map<int, unordered_set<int>> userMinutes;
    for (auto& log : logs)
        userMinutes[log[0]].insert(log[1]);

    vector<int> answer(k, 0);
    for (auto& [id, minutes] : userMinutes)
        if (minutes.size() <= k)
            answer[minutes.size() - 1]++;

    return answer;
    }
};