#include <stdio.h>

int main(void) {
    int base, height, area;
  printf("Enter the base of the rectangle in centimeters: ");
      scanf("%d",&base);
  printf("Enter the height of the rectangle in centimeters: ");
      scanf("%d",&height);
    area = base*height;
  printf("The area of the rectangle is: %dcm", area);    
  return 0;
}
