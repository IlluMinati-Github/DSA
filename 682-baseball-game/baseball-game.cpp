class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int> record;
        
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                record.pop_back();
            } else if (operations[i] == "D") {
                record.push_back(2 * record.back());
            } else if (operations[i] == "+") {
                record.push_back(record[record.size() - 2] + record.back());
            } else {
                record.push_back(stoi(operations[i]));
            }
        }

        for (int j = 0; j < record.size(); j++) {
            sum += record[j];
        }
        return sum;
    }
};