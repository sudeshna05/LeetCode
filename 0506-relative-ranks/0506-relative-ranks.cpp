class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         int n = score.size();
    std::vector<std::string> ranks(n);
    
    // Step 1: Sort the scores in descending order to determine the ranks.
    std::vector<int> sortedScore = score;
    std::sort(sortedScore.rbegin(), sortedScore.rend());

    // Step 2: Assign ranks based on the placement rules.
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ranks[i] = "Gold Medal";
        } else if (i == 1) {
            ranks[i] = "Silver Medal";
        } else if (i == 2) {
            ranks[i] = "Bronze Medal";
        } else {
            ranks[i] = std::to_string(i + 1);
        }
    }

    // Step 3: Match the ranks with the original scores' order.
    std::vector<std::string> answer(n);
    for (int i = 0; i < n; i++) {
        int index = std::find(sortedScore.begin(), sortedScore.end(), score[i]) - sortedScore.begin();
        answer[i] = ranks[index];
    }

    return answer;
    }
};