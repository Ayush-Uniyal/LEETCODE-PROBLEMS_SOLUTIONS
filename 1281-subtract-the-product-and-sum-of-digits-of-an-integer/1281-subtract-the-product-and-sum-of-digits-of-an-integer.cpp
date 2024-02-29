class Solution {
public:
    int subtractProductAndSum(int n) {
      int p=1;
      int sum=0;
    
while(n>0){
    int y=n%10;
    p=p*y;
    sum=sum+y;
    n=n/10;
}
return (p-sum);
    }
};