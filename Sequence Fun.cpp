class Solution {
	public:
		int NthTerm(int n){
            // Code  here
            if(n==1)
                return 2;   
            long long int result = 2;
            for(int i = 2; i <= n; i++)
                result = (result * i + 1) % 1000000007;
            return result;
		}
};
