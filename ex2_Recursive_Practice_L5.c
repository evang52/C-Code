
#include <stdio.h>
#include <string.h>
int i=0;
#define MAX  20
#define LEN  15
char objects[MAX][LEN];
char termCase[3] = "END";

//spaces = 2x the current index in the array
void bedtimestory(char words[MAX][LEN], int curr, int num)
{
for(int j =0;j < curr*2; j++)
  printf(" ");
if(curr == num-1)
{
 printf("... who fell asleep.\n");
 return;
}
if(curr ==0){
printf("A %s couldn't sleep, so her mother told a story about a little ", objects[curr]);
printf("%s,\n", objects[curr+1]);

}else{
 printf("who couldn't sleep, so the %s's mother told a story about a little", objects[curr]);
 printf(" %s,\n", objects[curr+1]);
}
bedtimestory(objects, curr+1, num);
for(int j =curr*2;j >0; j--)
  printf(" ");
if(curr ==0)
{
 printf("... and then the %s fell asleep.\n",objects[0]);
}else{
 printf("... and then the little %s fell asleep;\n", objects[curr]);
}


//recursive call
//second series of lines

}


int main()
{
 do{
 fgets(objects[i], LEN, stdin);
 objects[i][strlen(objects[i])-1] = '\0';
   i++;
  }while(i<MAX && strcmp(termCase,objects[i-1]) != 0);
  
 bedtimestory(objects,0,i-1); 

}

