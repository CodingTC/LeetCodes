// Ain't this just the funniest way to solve this
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<int, unordered_map<char, int>> rowsMap;
        unordered_map<int, unordered_map<char, int>> colsMap;
        unordered_map<int, unordered_map<char, int>> boxesMap;
        
        //loop through the rows 
        for(int i = 0, j = 0; i < board.size(); i++)
        {
            //loop through the columns 
            for(j = 0; j < board[i].size(); j++)
            {
                
                if(board[i][j] != '.')
                {
                    rowsMap[i][board[i][j]]++;
                    if(rowsMap[i][board[i][j]] > 1)
                    {
                        return false;
                    }
                    colsMap[j][board[i][j]]++;
                    if(colsMap[j][board[i][j]] > 1)
                    {
                        return false;
                    }
                    //box 0 done
                    if( (9*i) + j == 0 || (9*i) + j == 1 || (9*i) + j == 2 || 
                    (9*i) + j == 9 || (9*i) + j == 10 || (9*i) + j == 11 || 
                    (9*i) + j == 18 || (9*i) + j == 19 || (9*i) + j == 20)
                    {
                        boxesMap[0][board[i][j]]++;
                        if(boxesMap[0][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 1 done
                    else if( (9*i) + j == 3 || (9*i) + j == 4 || (9*i) + j == 5 || 
                    (9*i) + j == 12 || (9*i) + j == 13 || (9*i) + j == 14 || 
                    (9*i) + j == 21 || (9*i) + j == 22|| (9*i) + j == 23)
                    {
                        boxesMap[1][board[i][j]]++;
                        if(boxesMap[1][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 2 done
                    else if( (9*i) + j == 6 || (9*i) + j == 7 || (9*i) + j == 8 || 
                    (9*i) + j == 15 || (9*i) + j == 16 || (9*i) + j == 17 || 
                    (9*i) + j == 24 || (9*i) + j == 25 || (9*i) + j == 26)
                    {
                        boxesMap[2][board[i][j]]++;
                        if(boxesMap[2][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 3 done
                    else if( (9*i) + j == 27 || (9*i) + j == 28 || (9*i) + j == 29 || 
                    (9*i) + j == 36 || (9*i) + j == 37 || (9*i) + j == 38 || 
                    (9*i) + j == 45 || (9*i) + j == 46 || (9*i) + j == 47)
                    {
                        boxesMap[3][board[i][j]]++;
                        if(boxesMap[3][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 4 done
                    else if( (9*i) + j == 30 || (9*i) + j == 31 || (9*i) + j == 32 || 
                    (9*i) + j == 39 || (9*i) + j == 40 || (9*i) + j == 41 || 
                    (9*i) + j == 48 || (9*i) + j == 49 || (9*i) + j == 50)
                    {
                        boxesMap[4][board[i][j]]++;
                        if(boxesMap[4][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 5 done
                    else if( (9*i) + j == 33 || (9*i) + j == 34 || (9*i) + j == 35 || 
                    (9*i) + j == 42 || (9*i) + j == 43 || (9*i) + j == 44 || 
                    (9*i) + j == 51 || (9*i) + j == 52 || (9*i) + j == 53)
                    {
                        boxesMap[5][board[i][j]]++;
                        if(boxesMap[5][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }

                    //box 6 done
                    else if( (9*i) + j == 54 || (9*i) + j == 55 || (9*i) + j == 56 || 
                    (9*i) + j == 63 || (9*i) + j == 64 || (9*i) + j == 65 || 
                    (9*i) + j == 72 || (9*i) + j == 73 || (9*i) + j == 74)
                    {
                        boxesMap[6][board[i][j]]++;
                        if(boxesMap[6][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 7 
                    else if( (9*i) + j == 57 || (9*i) + j == 58 || (9*i) + j == 59 || 
                    (9*i) + j == 66 || (9*i) + j == 67 || (9*i) + j == 68 || 
                    (9*i) + j == 75 || (9*i) + j == 76 || (9*i) + j == 77)
                    {
                        boxesMap[7][board[i][j]]++;
                        if(boxesMap[7][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    //box 8 
                    else if( (9*i) + j == 60 || (9*i) + j == 61 || (9*i) + j == 62 || 
                    (9*i) + j == 69 || (9*i) + j == 70 || (9*i) + j == 71 || 
                    (9*i) + j == 78 || (9*i) + j == 79 || (9*i) + j == 80)
                    {
                        boxesMap[8][board[i][j]]++;
                        if(boxesMap[8][board[i][j]] > 1)
                        {
                            return false;
                        }
                    }
                    
                }
            }

        }

        return true;  
    }
};

// Time: O(N^2)
// Space: O(N^2)
