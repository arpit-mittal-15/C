#include <stdio.h>
#include <string.h>

void selection();
void create();
void update();
void delete();
void showAll();

typedef struct Book{
  int id;
  char name[20];
  char author[20];
  int price;
  int pages;
} Book;

Book books[20];
int bookCount = 0;
int bookId = 1;

void create(){
  if(bookCount < 20){
    char bookName[20];
    char authorName[20];
    int bookPrice;
    int bookPages;

    printf("Book name: ");
    scanf("%s", bookName);
    printf("Author name: ");
    scanf("%s", authorName);
    printf("Price: ");
    scanf("%d", &bookPrice);
    printf("Number of pages: ");
    scanf("%d", &bookPages);

    books[bookCount].id = bookId;
    strcpy(books[bookCount].name, bookName);
    strcpy(books[bookCount].author, authorName);
    books[bookCount].price = bookPrice;
    books[bookCount].pages = bookPages;

    bookCount = bookCount + 1;
    bookId = bookId + 1;

    printf("\n----New book inserted----\n\n");
  }
  else{
    printf("Bookshop is full");
  }
  return selection();
}

void update(){
  int updateBookId;
  printf("\nEnter id: ");
  scanf("%d", &updateBookId);

  char bookName[20];
  char authorName[20];
  int bookPrice;
  int bookPages;
  printf("Book name: ");
  scanf("%s", bookName);
  printf("Author name: ");
  scanf("%s", authorName);
  printf("Price: ");
  scanf("%d", &bookPrice);
  printf("Number of pages: ");
  scanf("%d", &bookPages);

  for(int i=0; i<20; i++){
    if(books[i].id == updateBookId){
      strcpy(books[i].name, bookName);
      strcpy(books[i].author, authorName);
      books[i].price = bookPrice;
      books[i].pages = bookPages;
      break;
    }
  }
  printf("\n---Book updated---\n\n");
  return selection();
}

void showAll(){
  for(int i=0; i<bookCount; i++){
    printf("\nId: %d", books[i].id);
    printf("\n+-----------------------+\n");
    printf("| Book name: %s\n", books[i].name);
    printf("| Author: %s\n", books[i].author);
    printf("| Price: %d", books[i].price);
    printf("\n+-----------------------+\n\n");
  }
  return selection();
}

void delete(){
  int deleteBookId;
  printf("\nEnter id: ");
  scanf("%d", &deleteBookId);
  for(int i=0; i<20; i++){
    if(books[i].id == deleteBookId){
      for(int j=i; j<20; j++){
        books[j] = books[j+1];
      }
      break;
    }
  }

  printf("\n---Book deleted---\n\n");
  bookCount--;
  return selection();
}

void selection(){
  printf("Select a task: \n");
  printf("1: For creating a new book item \n");
  printf("2: Show all books\n");
  printf("3: Update book information\n");
  printf("4: Delete an existing book item\n");
  printf("5: End the program\n");

  int option;

  printf("\nYour option: ");
  scanf("%d", &option);

  switch (option){
  case 1:
    create();
    break;
  case 2:
    showAll();
    break;
  case 3:
    update();
    break;
  case 4:
    delete();
    break;
  case 5:
    return;
  default:
    printf("\n---Please select one of the below options---\n\n");
    selection();
    break;
  }

  return;
}

int main(){
  selection();

  return 0;
}