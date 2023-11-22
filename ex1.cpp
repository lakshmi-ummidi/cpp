#include<bits/stdc++.h>
using namespace std;   
void Take_input(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
bool notClash (int i, int j, vector<vector<char>>& board, char num, int n) {
    for (int k = 0; k < n; k++) {
            // Row check
        if (board[i][k] == num) return false;
            // Column check
        if (board[k][j] == num) return false;
        if(board[3 * (i / 3) + k / 3][3 * (j / 3) + k % 3] == num) return false;
    }
    return true;
}   
bool solveBoard(vector<vector<char>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') {
                for (char num = '1'; num <= '9'; num++) {
                    if (notClash (i, j, board, num, n)) {
                        board[i][j] = num;
                        if (solveBoard (board, n)) return true;
                        else board[i][j] = '.'; // Backtrack
                    }
                }
                return false; // No valid number found
            }
        }
    }
    return true; // Board is filled
}	
void solveSudoku(vector<vector<char>>& board) {
    int n = board.size ();
    solveBoard (board, n);
}
int main(){
    ios_base::sync_with_stdio (false), cin.tie(nullptr), cout.tie (nullptr);
    Take_input();
    vector<char>v;
	vector<vector<char>>vt;
    char x;
    for (int i = 0; i < 9; i++) {
        v = {};
	    for (int j = 0; j < 9; j++) {
            cin >> x;
            v.push_back(x);
        }
        vt. push_back(v);
    }
    solveSudoku(vt);
    for (int i = 0; i < 9; i++) {
	    for (int j = 0; j < 9; j++) {
	        cout << vt[i][j] << " ";
	    }
	cout << "\n";
    }
}