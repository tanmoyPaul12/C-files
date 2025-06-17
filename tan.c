// #include<stdio.h>
// int main(){
//     printf("bYEEre world");
//     return 0;
// }

// #include<stdio.h>
// #define N 10
// int main()
// {
//     int count;
//     float sum,average,number;
//     sum=0;
//     count=0;
//     while (count<=N)
//     {
//         scanf("%f",& number);
//         sum=sum+number;
//         count=count+1;
//     }
//     average=sum/N;
//     printf("N=%d sum=%function",N,sum);
//     printf("average=%f",average);
// }

/*Area of a circle*/
// #include<stdio.h>
// int main()
// {
//     float r=5.0,pi=3.14159;
//     float a=3.1415*6*6;
//     // float area=pi*r*r;

//     printf("Area of the circle is:%f\n\n", a);
//     scanf("%f", &a);
//     return 0;
// }
// #include <stdio.h>
// #define PI 3.14159
// int main()
// {
//     float r;
//     float a ;
//     printf("Enter radius:");
//     scanf("%f", &r);
//     a=PI*r*r;
//     printf("The area of circle is:%f", a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10;
//     int b=20;
//     printf("value isn't 30 it's :%d\n",a);
//     printf("value isn't 40 it's :%d",b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     int b=20;
//     printf("value isn't 30 it's :" );               //printf means it will print things we will write
//     scanf("%d", &a);                               //scanf means we have to write in terminal
//     printf("value isn't 40 it's :");
//     // printf("value isn't 40 it's :%d\n", a);
//     scanf("%d", &b);
//     printf("you are right,cheers");
//     return 0;
// }

// // /*Largest number from 3 numbers*/
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st number: ");
//     scanf("%d",&a);
//     printf("enter 2nd number: ");
//     scanf("%d",&b);
//     printf("enter 3rd number: ");
//     scanf("%d",&c);
//     if(a>b && b>c)
//     {
//         printf("The largest number is %d",a);
//     }
//     else if(b>a && b>c)
//     {
//         printf("The largest number is %d",b);
//     }
//     else{
//         printf("The largest number is %d",c);
//     }
// }

// /*triangle*/
// #include<stdio.h>
// void main()
// {
//     int a,b,c,t;
//     printf("Enter three sides of a Triangle :");
//     scanf("%d %d %d",&a,&b,&c);
//     t=a+b+c;
//     if(t==180)
//     {
//         printf("Entered sides totalling to :%d",t);
//         printf("/n It is a valid triangle");
//     }
//     else{
//         printf("Entered sides totalling to :%d",t);
//         printf("/n It is not a valid triangle");
//     }
// }

// /*Even or odd*/
// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter any no.\n");
//     scanf("%d", &x);
//     if(x%2==0)  {
//         printf("The number is even");
//     }
//     else{
//         printf("The number is odd");
//     }
//      return 0;
// }

// /*Largest number from 4 numbers*/
// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("enter 1st no. : ");
//     scanf("%d",&a);
//     printf("enter 2nd no. : ");
//     scanf("%d",&b);
//     printf("enter 3rd no. : ");
//     scanf("%d",&c);
//     printf("enter  4th no. : ");
//     scanf("%d",&d);
//     if(a>b && a>c && a>d)
//     {
//         printf("The largest no. is: %d",a);
//     }
//     else if(b>a && b>c && b>d)
//     {
//         printf("The largest no. is: %d",b);
//     }
//     else if(c>a && c>b && c>d)
//     {
//         printf("largest no. is: %d",c);
//     }
//     else if(a==b && a>c && a>d)
//     {
//         printf("The largest no. is %d",c);
//     }
//     else
//     {
//         printf("The largest no. is %d",d);
//     }

// }

// /*number swapping*/
// #include<stdio.h>
// int main()
// {
// 	int a=100,b=200,t;
// 	printf("Original values of 'a' and 'b' before swapping are : \n%d\n\n%d ",a,b);
// 	t=a;
// 	a=b;
// 	b=t;
// 	printf("\nValues of 'a' and 'b' after swapping are : \n%d\n\n%d\n",a,b);
//     return 0;
// }

// // /*calculation of simple interest*/
// #include <stdio.h>
// int main()
// {
//     float p, r, si;
//     int n;
//     p=1000.5;
//     n=3;
//     r=15.5;
//     si= p*n*r/100;
//     printf("%f",si);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int x = 10;
//     x+=3;
//     printf("%d\n", x);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a = 42;
//     float b = 5.4;
//     char c[9]= {'H', 'I', '\n', 'W', 'O', 'R', 'L', 'D', '\0'};
//     char d[3]= {'h', 'i', '\0'};
//     char e ='t';
//     printf("hello %d\n\n\n", a);
//     // scanf("%d\n\n", &a);
//     printf("hello %.2f\n\n", b);
//     printf(" %s\n\n", c);
//     printf("hello %s\n\n\n", d);
//     printf("hello %c", e);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int a = 5, b = 2;
//     printf("value is %f", (float)a/b);  //converting int to float example
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    float a = 6.6, b = 2;
//     printf("value is %.3f",a/b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("what is my name:\n");
//     scanf("%d\n", &a);
//     printf("You entered wrong name\n");
//     printf("Try again\n");
//     scanf("%d\n", &b);
//     printf("You got it \n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char answer[50]; // Array to store the input string
//     int attempts = 0; // Counter for attempts

//     while (1) // Infinite loop until the correct answer is entered
//     {
//         printf("Who is Tanmoy's gf?\n");
//         scanf("%s", answer); // Read input as a string

//         if (strcmp(answer, "sarnali") == 0) // Replace "correct_name" with the actual name
//         {
//             printf("You got it!\n");
//             break; // Exit the loop
//         }
//         else
//         {
//             attempts++;
//             if (attempts >= 3) // Allow a maximum of 3 attempts
//             {
//                 printf("You've used all your attempts. Please try again later.\n");
//                 break;
//             }
//             printf("You entered the wrong name. Try again.\n");
//         }
//     }

//     return 0;
// }


// FIBONACCI SERIES 

// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     int i, first = 0, second = 1, next;
//     printf("Entered number is :%d\n", n);
//     printf("%d\n", first);
//     printf("%d\n", second);
//     for ( i = 3; i <= n; i++)
//     {
//       next = first + second;
//       printf("%d\n", next);
//       first = second;
//       second = next;
//     }
//     return 0;
// }






// #include <stdio.h>

// int main() {
//     int number;
//     int sum = 0;

//     printf("Enter positive numbers to add (0 to stop):\n");

//     do {
//         printf("Enter a number: ");
//         scanf("%d", &number);

//         if (number > 0) {
//             sum += number;
//         } else if (number < 0) {
//             printf("Negative number ignored.\n");
//         }

//     } while (number != 0);

//     printf("Total sum of positive numbers: %d\n", sum);

//     return 0;
// }
