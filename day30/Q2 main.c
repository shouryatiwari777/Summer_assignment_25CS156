Write a program to Create mini library system.
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n=0, choice, i, id;

    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d",&b[n].id);

            printf("Enter Title: ");
            scanf("%s",b[n].title);

            printf("Enter Author: ");
            scanf("%s",b[n].author);

            n++;
            break;

        case 2:
            printf("\nID\tTitle\tAuthor\n");
            for(i=0;i<n;i++) {
                printf("%d\t%s\t%s\n",
                b[i].id,b[i].title,b[i].author);
            }
            break;

        case 3:
            printf("Enter Book ID: ");
            scanf("%d",&id);

            for(i=0;i<n;i++) {
                if(b[i].id==id) {
                    printf("ID: %d\n",b[i].id);
                    printf("Title: %s\n",b[i].title);
                    printf("Author: %s\n",b[i].author);
                    break;
                }
            }

            if(i==n)
                printf("Book Not Found\n");

            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while(choice!=4);

    return 0;
}