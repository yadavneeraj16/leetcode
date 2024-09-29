// class Solution {
// public:
//     string intToRoman(int num) {
//         string ans="";
//        int count=0;
//         if(num/1000)
//         {
//             count=num/1000;
//             while(count)
//             {
//                 ans+='M';
//                 num-=1000;
//                 count--;
//             }
//         }
//         if(num/100)
//         {
//             while(num/100)
//             {
//              if(num/100==9)
//              {
//                 ans+="CM";
//                 num-=900;
//              }
//              if(num/100>=5){
//                 ans+='D';
//                 num-=500;
//              }
//              if(num/100==4){
//                 ans+="CD";
//                 num-=400;
//              }
//              if(num/100)
//              {
//                 count=num/100;
//                 while(count){
//                     ans+='C';
//                     num-=100;
//                     count--;
//                 }
//              }
//             }
//         }

//         if(num/10){
//             while(num/10){
//              if(num/10==9){
//                 ans+="XC";
//                 num-=90;
//              }
//              if(num/10>=5){
//                 ans+='L';
//                 num-=50;
//              }
//              if(num/10==4){
//                 ans+="XL";
//                 num-=40;
//              }
//              if(num/10){
//                 count=num/10;
//                 while(count){
//                     ans+='X';
//                     num-=10;
//                     count--;
//                 }
//              }
//             }
//         }
//         if(num){
//             while(num){
//              if(num==9){
//                 ans+="IX";
//                 num-=9;
//              }
//              if(num>=5){
//                 ans+='V';
//                 num-=5;
//              }
//              if(num==4){
//                 ans+="IV";
//                 num-=4;
//              }
//              if(num){
//                 while(num){
//                     ans+='I';
//                     num--;
//                 }
//              }
//             }
//         }
//         return ans;
//     }
// };












class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        while(num >= 1000) { ans += 'M'; num -= 1000; }
        if(num >= 900) { ans += "CM"; num -= 900; }
        if(num >= 500) { ans += 'D'; num -= 500; }
        if(num >= 400) { ans += "CD"; num -= 400; }
        while(num >= 100) { ans += 'C'; num -= 100; }
        if(num >= 90) { ans += "XC"; num -= 90; }
        if(num >= 50) { ans += 'L'; num -= 50; }
        if(num >= 40) { ans += "XL"; num -= 40; }
        while(num >= 10) { ans += 'X'; num -= 10; }
        if(num >= 9) { ans += "IX"; num -= 9; }
        if(num >= 5) { ans += 'V'; num -= 5; }
        if(num >= 4) { ans += "IV"; num -= 4; }
        while(num >= 1) { ans += 'I'; num -= 1; }
        return ans;
    }
};
