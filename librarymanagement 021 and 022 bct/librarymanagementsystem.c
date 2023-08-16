
// librarymanagementsystemby Bipul Chamlagain "ACE079BCT022"
#include <conio.h>    
#include <stdlib.h>  
// to import strings and use strings  
#include <string.h>  
  
  
  
// declare all variables which store their respective   
// data using structure ' library '  
struct library  
{  
    // to store the name of the book  
    char book_name[100];  
    // to store the name of the author of the book  
    char author_name[100];  
    // to store the cost of the book  
    float cost;  
    // to store the number of pages of the book  
    int no_of_pages;  
};  

  
   
  
// main function  
int main()  
{  
    // using the strut library again.'  
    // in order to perform operations  
    struct library lib[100];  
    char book_name[100];  
    int i, j, count;  
    i = 0;  
    j = 0;  
    count = 0;  
    
  
    while(j!=6)  
    {
	  printf("llllll    llllllllll  llllll    ll  ll  ll\n");
	  printf("ll    ll      ll      ll    ll  ll  ll  ll\n");
	  printf("llllll        ll      llllll    ll  ll  ll\n");
	  printf("ll    ll      ll      ll        ll  ll  ll\n");
	  printf("llllll    llllllllll  ll        llllll  lllllll\n");
	  printf("\nROLL NO:ACE079BCT022");
	    printf(" \n\n1. Add Book details\n ");  
        printf(" 2. Display the list of books and its details\n ");  
        printf(" 3. Display the total no. of books in the library\n ");  
        printf(" 4. Exit\n\n");  
        printf(" Enter the number: ");  
        scanf(" %d", &j);  
  
  
       
  
        switch(j)  
        {  
            // in order to add the book details  
            case 1:  
                printf(" \nYou can add the details of the book ");  
                printf(" \nEnter the book name: ");  
                scanf(" %s", lib[i].book_name);  
                printf(" \nEnter the author name: ");  
                scanf(" %s", lib[i].author_name);  
                printf(" \nEnter the number of pages: ");  
                scanf(" %d", &lib[i].no_of_pages);  
                printf(" \nEnter the cost of the book: ");  
                scanf(" %f", &lib[i].cost);  
                count = count + 1;  
                i = i + 1;  
                break;  
  
            case 2:  
                // if there are no books registered previously  
                if (count==0)  
                {  
                    printf(" \nThere are no books stored!!\n\n ");  
                }  
                else  
                {  
                    // to view the list of the books  
                    printf(" \nYou can view the list of books ");  
                    printf(" \nThe list of books are: ");  
                    for(i=0; i < count; i++)  
                    {  
                        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                        printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
                        printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);  
                    }  
                }  
                break;  
  
            case 3:  
                // to view the total number of books  
                printf(" \nTotal number of books in the library are: %d\n\n ", count);  
                break;  
              
            case 4:  
                // to exit from the program  
                exit(0);  
                  
            default:  
                // if any number other than 1, 2, 3, 4 is entered   
                printf(" \nInvalid number entered\n\n ");  
        }  
  
    }  
  
}  
