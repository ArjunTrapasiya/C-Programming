// Create a structure book with book title, author, publication, and price. Read the data of 3 books and display. 
#include<stdio.h>
struct book
{
	char title[50];
	char author[50];
	char publication[50];
	float price;
};
int main()
{
	struct book b1,b2,b3;
	
	// BOOK 1
	printf("Enter The Book Title:-1:");
	scanf("%s",b1.title);
	printf("\nEnter The Author Name:-1:");
	scanf("%s",b1.author);
	printf("\nEnter The Publication:-1:");
	scanf("%s",b1.publication);
	printf("\nEnter Price:-1:");
	scanf("%f",&b1.price);
	
	printf("\n");
	printf("Book Title:%s",b1.title);
	printf("\nBook Author:%s",b1.author);
	printf("\nBook Publication:%s",b1.publication);
	printf("\nBook Price:%f",b1.price);
	
	// BOOK 2
	printf("\n");
	printf("\nEnter The Book Title:-2:");
	scanf("%s",b2.title);
	printf("\nEnter The Author Name:-2:");
	scanf("%s",b2.author);
	printf("\nEnter The Publication:-2:");
	scanf("%s",b2.publication);
	printf("\nEnter Price:-2:");
	scanf("%f",&b2.price);
	
	printf("\n");
	printf("\nBook Title:%s",b2.title);
	printf("\nBook Author:%s",b2.author);
	printf("\nBook Publication:%s",b2.publication);
	printf("\nBook Price:%f",b2.price);
	
	//BOOK 3
	printf("\n");
	printf("\nEnter The Book Title:-3:");
	scanf("%s",b3.title);
	printf("\nEnter The Author Name:-3:");
	scanf("%s",b3.author);
	printf("\nEnter The Publication:-3:");
	scanf("%s",b3.publication);
	printf("\nEnter Price:-3:");
	scanf("%f",&b3.price);
	
	printf("\n");
	printf("\nBook Title:%s",b3.title);
	printf("\nBook Author:%s",b3.author);
	printf("\nBook Publication:%s",b3.publication);
	printf("\nBook Price:%f",b3.price);
	
	return 0;
}
