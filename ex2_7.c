#include <stdio.h>

int rgb_to_gray(int r, int g, int b, int ppm_max) {
  return ((r*30 + g*59 + b*11) * 255) / (100 * ppm_max);  // Follow exactly$
}


int main(){
int x1,x2,y1,y2;
int rows, cols;
int ppm_max = 255;
scanf("%d%d%d%d", &x1, &x2,&y1,&y2);
  puts("P3");
  scanf("%d%d", &cols, &rows);
  printf("%d\n%d\n", cols, rows);
  printf("255\n");
  scanf("%d", &ppm_max);
  int i,j;
  int r, g, b, gray;

  for(i=0; i<rows; i++) {
    for(j=0; j<cols; j++) {
      scanf("%d%d%d", &r, &g, &b);
     if(!(j>= x1 && j<= x2 && i<=y2 && i >= y1)){
      gray = rgb_to_gray(r, g, b, ppm_max);
      printf("%d\n%d\n%d\n", gray, gray, gray);
      }else
      printf("%d\n%d\n%d\n", r,g,b);
    }
  }
}
