// class Solution {
// public:
//     int minMovesToSeat(vector<int>& seats, vector<int>& students) {
//         sort(seats.begin(),seats.end());
//         sort(students.begin(),students.end());
//         int ans=0;
//         for(int i=0;i<seats.size();i++) ans+=abs(seats[i]-students[i]);
//         return ans;
//     }
// };
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int maxPosition = max(*max_element(seats.begin(),seats.end()), *max_element(students.begin(),students.end()));
        vector<int> differences(maxPosition, 0);
        for (int position : seats) differences[position - 1]++;
        for (int position : students) differences[position - 1]--;

        int moves = 0;
        int unmatched = 0;
        for (int difference : differences) {
            moves += abs(unmatched);
            unmatched += difference;
        }
        return moves;
    }

private:
    int findMax(const vector<int>& array) {
        int maximum = 0;
        for (int num : array) {
            if (num > maximum) {
                maximum = num;
            }
        }
        return maximum;
    }
};