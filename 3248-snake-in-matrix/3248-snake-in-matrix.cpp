class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) 
    {
               int i = 0, j = 0;
        for(auto com:commands)
        {
            if(com == "RIGHT") j++;
            else if(com == "DOWN") i++;
            else if(com == "LEFT") j--;
            else if(com == "UP") i--;
        }

        
        return(i*n)+j;
    }
};