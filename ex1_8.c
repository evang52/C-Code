
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<stdio.h>

char input[22];     // To read in a string of up to 20 hexits plus newline and null
		 //20 for the size of the hexit, excluding the null and newline
int h_to_i(char* str){
 int ans=0;
 int tmp;
 int z=0;
   while (str[z] != '\n'){
   if(str[z] >= 97 && str[z]<= 102){
   tmp = str[z] -87;
  } else{
  tmp = str[z]-48;
 }
ans = ans*16 +tmp;
z++; 
/*if(str[z+1] == '\n'){
  ans = tmp + ans;
  z++;
}else{
ans = (tmp +ans) *16;
 z++;
 }*/
}
return ans;
}

int main() {

  int value;
                    // Do the following inside a loop
  do{
    fgets(input, 22, stdin);
    value = h_to_i(input);
  if( value ==0)
   break;
   printf("%d\n", value);
  }while(value != 0);
}
