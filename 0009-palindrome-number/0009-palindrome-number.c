bool isPalindrome(int x) {
    long long int rev=0;
    long long int original=x;
    while(x>0){
        rev=rev*10+x%10;
        x/=10;
    }
    return rev==original;
}