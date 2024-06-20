#include <stdio.h>
int main()
{
  double x1, x2, x3, y1, y2, y3;
  printf("Enter the coordinates for 1st point: ");
  scanf("%lf,%lf", &x1, &y1);
  printf("Enter the coordinates for 2nd point: ");
  scanf("%lf,%lf", &x2, &y2);
  printf("Enter the coordinates for 3rd point: ");
  scanf("%lf,%lf", &x3, &y3);

  double m1 = (y2 - y1) / (x2 - x1);
  double m2 = (y3 - y2) / (x3 - x2);

  m1 == m2 ? printf("They are collinear") : printf("They are not collinear");

  // if (m1 == m2)
  // {
  //   printf("They are collinear");
  // }
  // else{
  //   printf("They are not collinear");
  // }
  return 0;
}