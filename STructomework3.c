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
    struct book d ;
    //inputs
    printf("enter book title\n");
    scanf("%s", & d.title );
    printf("enter book author:\n" );
    scanf("%s",& d.author);
    printf("enter year of publication\n");
    scanf("%d", &d.publication_yr );
    printf("enter book ISBN\n");
    scanf("%s",& d.ISBN );
    printf("enter book price\n");
    scanf("%f",& d.price );
    //prints output 
    printf("\nbook📙title:%s\n", d.title);
    printf("book author✍️:%s\n", d.author );
    printf("Year published📢:%d\n",d.publication_yr);
    printf("📙ISBN:%s\n", d.ISBN );
    printf("book price💰:%f",d.price);
    return 0 ;
}