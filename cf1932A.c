#include <stdio.h>
 
int main(){
   int t,n;
   scanf("%d",&t);
   while(t-- > 0){
       scanf("%d",&n);
       char arr[n+1];
       scanf("%s",&arr);
       char prev = '.';
       int count = 0;
       for(int i = 0; i<n; ++i){
           if(prev == '*' && arr[i] == '*'){
               break;
           }
           if(arr[i] == '@'){
               count++;
           }
           prev = arr[i];
       }
       printf("%d\n",count);
   }
   return 0;
}
