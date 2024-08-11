class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) 
    {
        int x=0,y=0;
        for(int i=0;i<c.size();i++){
            if(c[i]=="UP"){
                x--;
            }
            if(c[i]=="DOWN"){
                x++;
            }
            if(c[i]=="LEFT"){
                y--;
            }
            if(c[i]=="RIGHT"){
                y++;
            }
        }
        return(x*n)+y;
    }
};