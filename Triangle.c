/*Write a C program that:

Prompts the user to enter the coordinates (x, y) of three points in a 2D plane, representing the vertices of a triangle.
Reads the six integer values (x1, y1, x2, y2, x3, y3) from the user and stores them.
Calculates the lengths of the three sides of the triangle using the distance formula:
side1 = √((x2 - x1)^2 + (y2 - y1)^2)
side2 = √((x3 - x2)^2 + (y3 - y2)^2)
side3 = √((x1 - x3)^2 + (y1 - y3)^2)
Determines if the three points form a valid triangle. (A triangle is valid if the sum of any two sides is greater than the third side).
Displays a message indicating whether the triangle is valid or not.
If the triangle is valid, performs the following:
Classifies the triangle as either:
Equilateral: All three sides are equal
Isosceles: Two sides are equal
Scalene: All three sides are different
Right-angled: One angle is exactly 90 degrees (use the Pythagorean theorem to check)
Displays a message indicating the type of triangle.
Calculates and displays the area of the triangle using Heron's formula.*/

#include<stdio.h>
#include<math.h>
int main()
{
    //variable initialization
    int x1,x2,x3,y1,y2,y3;

    float length_of_side_A;
    float length_of_side_B;
    float length_of_side_C;

    length_of_side_A = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    length_of_side_B = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
    length_of_side_C = sqrt(pow((x1 - x3),2) + pow((y1 - y3),2));


    int sum_of_A_and_B = length_of_side_A + length_of_side_B;
    int sum_of_A_and_C = length_of_side_C + length_of_side_A;
    int sum_of_C_and_B = length_of_side_C + length_of_side_B;

    float area = length_of_side_A * length_of_side_B * length_of_side_C;

    float a = pow(length_of_side_A,2);
    float b = pow(length_of_side_B,2);
    float c = pow(length_of_side_C,2);

    float d = a + b;
    float e = a + c;
    float f = c + b;
    
    //Entering co-ordinates of the triangle
    printf("Enter the triangle co-ordinates:");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);

    //Area of the triangle
    printf("The area of this triangle is: %.2f\n",area);

    //length of each side
    printf("Length of side A is:%.2f\n",length_of_side_A);
    printf("Length of side B is:%.2f\n",length_of_side_B);
    printf("Length of side C is:%.2f\n",length_of_side_C);

    //Test for a valid triangle
    if(sum_of_A_and_B > length_of_side_C)
    {
      printf("This is triangle is valid\n");
    }
    else if(sum_of_A_and_C > length_of_side_B)
    {
      printf("This is triangle is valid\n");
    }
    else if(sum_of_C_and_B > length_of_side_A)
    {
      printf("This is triangle is valid\n");
    }
    else
    {
        printf("INVALID TRIANGLE\n");
    }


    //Classification of the triangle
    if (length_of_side_A == length_of_side_B && length_of_side_C == length_of_side_B)
    {
        printf("This triangle is equilateral\n");
    }
    else if (length_of_side_A == length_of_side_B && length_of_side_B != length_of_side_C)
    {
        printf("This triangle is Isosceles\n");
    }
    else if (length_of_side_A == length_of_side_C && length_of_side_C != length_of_side_B)
    {
        printf("This triangle is Isosceles\n");
    }
    else if (length_of_side_B == length_of_side_C && length_of_side_C != length_of_side_A)
    {
        printf("This triangle is Isosceles\n");
    }
    else 
    {
        printf("This triangle is Scalene\n");
    }

   if(a == f)
   {
    printf("It is a right angled triangle");
   }
   else if(b == e)
   {
    printf("It is a right angled triangle");
   } 
   else if(c == d)
   {
    printf("It is a right angled triangle");
   } 
   else
   {
    printf("It is NOT a right angled triangle");
   }


return 0;
}