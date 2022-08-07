double multiply(double number, int n) {
    double ans = 1.00;
    for(int i = 1;i<=n;i++) {
        ans = ans * number;
    }
    return ans; 
}
double findNthRootOfM(int n, int m) {
	double low = 0;
    double high = m+1;
    double eps = 1e-8; 
    double mid =0;
    while((high - low) > eps) {
         mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    return mid;
}
