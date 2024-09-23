#include <stdio.h>

int main(void) {
    int base, height, area;
  printf("Type the base of the rectangle in centimeters: ");
      scanf("%d",&base);
  printf("Type the height of the rectangle in centimeters: ");
      scanf("%d",&height);
    area = base*height;
  printf("The area of the rectangle is: %dcm", area);    
  return 0;
}
