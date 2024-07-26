class Solution {
public:
    string losingPlayer(int x, int y) {
        int a=x;
        int b=y/4;
        int c=min(a,b);
        // if(b<=0){
        //     return"-1";
        // }
        if(c%2){
            return "Alice";
        }
        else{
            return "Bob";
        }
        
    }
};