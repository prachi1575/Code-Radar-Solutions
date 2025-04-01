int fibonacciSeries(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacciSeries(n-1)+fibonaaciSeries(n-2);
    }

}
