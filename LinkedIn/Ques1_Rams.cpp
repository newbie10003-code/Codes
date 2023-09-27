/*
1. Given a 2D board and a word, find if the word exists in the grid.
    The word can be constructed from letters of sequentially adjacent cells, where "adjacent"
    cells are horizontally or vertically neighbouring. The same letter cell may not be used more
    than once.
    Example:
    Input: board = [["A","B","C","E"], ["S","F","C","S"], ["A","D","E","E"]], word = "ABCCED"
    Output: true

*/

#include <bits/stdc++.h>
using namespace std;

int r, c;

bool isValid(int i, int j, int rows, int cols)
{
    if ((i >= 0 && i < rows) && (j >= 0 && j < cols))
        return true;
    return false;
}

bool solve(vector<vector<char>> board, vector<vector<bool>> &visited, string word, int i, int j, int wordLen)
{
    if (wordLen == word.length())
        return true;

    visited[i][j] = 1;
    cout << i << " " << j << " " << board[i][j] << endl;
    cout << word[wordLen] << endl;
    if (isValid(i - 1, j, board.size(), board[0].size()) && visited[i - 1][j] != 1 && board[i - 1][j] == word[++wordLen])
    {
        if (solve(board, visited, word, i - 1, j, wordLen))
            return true;
    }
    if (isValid(i + 1, j, board.size(), board[0].size()) && visited[i + 1][j] != 1 && board[i + 1][j] == word[++wordLen])
    {
        if (solve(board, visited, word, i + 1, j, wordLen))
            return true;
    }
    if (isValid(i, j - 1, board.size(), board[0].size()) && visited[i][j - 1] != 1 && board[i][j - 1] == word[++wordLen])
    {
        if (solve(board, visited, word, i, j - 1, wordLen))
            return true;
    }
    if (isValid(i, j + 1, board.size(), board[0].size()) && visited[i][j + 1] != 1 && board[i][j + 1] == word[++wordLen])
    {
        if (solve(board, visited, word, i, j + 1, wordLen))
            return true;
    }
    else
        return false;
    visited[i][j] = 0;
}

bool check(vector<vector<char>> &board, string word)
{
    vector<vector<bool>> visited(r, vector<bool>(c, 0));
    queue<pair<int, int>> q;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == word[0])
            {
                q.push({i, j});
            }
        }
    }

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        if (solve(board, visited, word, front.first, front.second, 0))
            return true;
    }
    return false;
}

int main()
{
    cin >> r >> c;
    string word;
    cin >> word;
    if (word == "" || word == " ")
    {
        cout << "False" << endl;
        return 0;
    }

    vector<vector<char>> board(r, vector<char>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> board[i][j];
        }
    }

    if (check(board, word))
    {
        cout << "True";
    }
    else
        cout << "False";
}