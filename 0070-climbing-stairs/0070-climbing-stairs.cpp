class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==0) return 1;
//         if(n==1) return 1;
//         if(n==2) return 2;
//         if(n==3) return 3;
//         if(n==4) return 5;
//         if(n==5)  return 8;
        
        
//         long long res = climbStairs(n-1) + climbStairs(n-2);
//         return res;
//     }
// };


public:
    int climbStairs(int n) {
    // base cases
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    
    int a = 2,b=1,c=0;
   
  for(int i=2; i<n; i++){
    	c = a + b;
    	b = a;
        a = c;
    }
    return c;
}
};    