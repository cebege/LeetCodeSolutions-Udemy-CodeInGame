#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        int N = 9; // 9 x 9 grid.

        // Use unordered_set to record the status
        std::vector<std::unordered_set<char>> rows(N); // create a vector of unordered set with size N (9) . Setting a record status of contents.
        std::vector<std::unordered_set<char>> cols(N); // as above but with column.
        std::vector<std::unordered_set<char>> boxes(N); // as above but with boxes.
        for (int r = 0; r < N; r++) {
            rows[r] = std::unordered_set<char>(); // initialising the three arrays of unordered sets.
            cols[r] = std::unordered_set<char>();
            boxes[r] = std::unordered_set<char>();
        }

        for (int r = 0; r < N; r++) { // nested loops to traverse the grids.
            for (int c = 0; c < N; c++) {
                char val = board[r][c]; // retrieve character value, '.' if empty or a digit character at the current cell of the board.

                // Check if the position is filled with a number, if not continue.
                if (val == '.') {
                    continue;
                }

                // Check the row for duplicates, not valid if a duplicate is found and the loop is broken.
                if (rows[r].count(val) > 0) {
                    return false;
                }
                rows[r].insert(val); // updates per the current digit in the array even after a duplicate is found to continue the process.

                // Check the column
                if (cols[c].count(val) > 0) {
                    return false;
                }
                cols[c].insert(val);

                // Check the box
                int idx = (r / 3) * 3 + c / 3;
                if (boxes[idx].count(val) > 0) {
                    return false;
                }
                boxes[idx].insert(val);
            }
        }
        return true;
    }
};