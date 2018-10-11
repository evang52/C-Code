// if (k==0){return 1;}
 //return (n*NchooseK(n-1, k-1))/k;
#include<stdio.h>

char input1[22];     // To read in a string of up to 20 hexits plus newline and null
char input2[22];     // To read in a string of up to 20 hexits plus newline and null

int h_to_i(char* str);
int NchooseK(int n, int k);

int main() {

  int n, k, result;
  do{                // Do the following inside a loop
    fgets(input1, 22, stdin);
    n = h_to_i(input1);
   if(n==0)
     break;
    fgets(input2, 22, stdin);
    k = h_to_i(input2);
    result = NchooseK(n, k);
    printf("%d\n", result);
   }while(n !=0); 
}

int h_to_i(char* str) {
 int ans=0;
 int tmp;
 int z=0;
   while (str[z] != '\n'){
   if(str[z] >= 97 && str[z]<= 102){
   tmp = str[z] -87;
  } else{
  tmp = str[z]-48;
 }
if(str[z+1] == '\n'){
  ans = tmp + ans;
  z++;
}else{
ans = (tmp +ans) *16;
 z++;
 }
}
return ans;
}

int NchooseK(int n,int k){
int i,j;
int resp =n;
for(i=2; i <=k; i++){
 resp *= (n-i+1);
 resp /= i;
}
return resp;
}
