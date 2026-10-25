a#include <stdio.h>
int reverse(int n, int rev) {
    if(n==0) 
        return rev;
        else
        return reverse(n/10, rev *10+(n%10));
    }
    int main() {
        int n;
    printf("Enter number :");
    scanf("%d",&n);
    
 int  reversed=reverse(n ,0);
  
  if (reversed == n) 
      printf("%d is palindrome\n", n );
      else {
          printf("%d is not palindrome\n",n);
          
     }
 return 0;
  }
