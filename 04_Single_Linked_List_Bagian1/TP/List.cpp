#include <iostream>
#include "List.h"
using namespace std;


// Implementasi dari procedure createList
void createList(List &L){
  /* this procedure will  initialize the list L */
  first(L) = NULL;
}

// Implementasi dari fungsi allocate
address allocate(infotype x){

  address P = new elmlist;
  info(P) = x;
  next(P) = NULL;

  return P; 
}

// Implementasi dari procedure insertFirst
void insertFirst(List &L, address P){
  /*  TODO: Insert the new element pointed by F to the first of list L */
  // YOUR CODES HERE
  //----------------------
  next(P) = first(L);
  first(L) = P;
  //----------------------
}

// Implementasi dari proc printInfo
void printInfo(List L){
  /*  this procedure will output the info of each element in list L */
  address P = first(L);
  while (P != NULL){
    cout << info(P) << ", ";
    P = next(P);
  }
  cout << endl;
}

/* SOAL NO 7 */
// Insert last: Insert node at the end of the list
void insertLast(List &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        address temp = first(L);
        while (next(temp) != NULL) {
            temp = next(temp);
        }
        next(temp) = P;
    }
}

// Search info: Function to search for an element in the list
address searchInfo(List L, infotype x) {
    address P = first(L);
    while (P != NULL) {
        if (info(P) == x) {
            return P;
        }
        P = next(P);
    }
    return NULL;  // Return NULL if not found
}

// Delete last: Delete the last node from the list
void deleteLast(List &L, address &P) {
    if (first(L) == NULL) {
        cout << "List is empty" << endl;
    } else if (next(first(L)) == NULL) {
        P = first(L);
        first(L) = NULL;
    } else {
        address temp = first(L);
        while (next(next(temp)) != NULL) {
            temp = next(temp);
        }
        P = next(temp);
        next(temp) = NULL;
    }
}
