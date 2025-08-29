class Solution {
public:
    int subtractProductAndSum(int n) {

    int digit ;
    int prod = 1 ;
    int sum = 0 ;   

    while ( n > 0) {
        
    digit = ( n % 10 ) ;    
    n = ( n / 10 );

        prod = prod * digit ; 
        sum = sum + digit ;

    }

    return  prod - sum ; 

    }        
    
};
