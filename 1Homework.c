#include <stdio.h>
#include <string.h>
/*Author :Anyasi Liloyo Munala 
Reg:CT101/G/22812 */
  // Create a structure variable 
  //structure declaration 
struct book {
    char title [30];
    char author [30];
    int publication_yr;
    char ISBN [13];
    float price;
};
int main ()  {
      //initializing 
    struct book d;

    strcpy(d.title,"Introduction to C programming");
    strcpy(d.author,"John Wick ");
    d.publication_yr=2022;
    strcpy(d.ISBN, "9780131103627");
    d.price=49.99;
    //prints the values 
    printf("\nbook📙title:%s\n", d.title);
    printf("book author✍️:%s\n", d.author );
    printf("Year published📢:%d\n", d.publication_yr);
    printf("📙ISBN:%s\n", d.ISBN );
    printf("book price💰:%f",d.price);
    return 0 ;
}