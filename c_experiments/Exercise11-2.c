#include <stdio.h>
#include <assert.h>

struct entry {
    int           value;
    struct entry  *next;
};


// TODO: Write a function called 'insertEntry' to insert a new entry into a linked list. 

// Function takes pointer to struct entry of list to insert and pointer to struct entry of list to to insert after.
void insertEntry(struct entry *newEntry, struct entry *refEntry) {
    assert (!(newEntry->next));
    if ((refEntry->next) != NULL) {
        newEntry->next = refEntry->next;
    }

    refEntry->next = newEntry;

    // Update *location.next to *insert address after giving location. next to *insert.next
    /*struct entry aWholeNewDeal;
    
    
    aWholeNewDeal = *insert;        // This works great for setting the whole struct 
    aWholeNewDeal.value = insert->value;
    aWholeNewDeal.next  = insert->next;
*/
    
}

int main (void) {

    int a = 5;                          /// Integer type holding the value 5
    
    int *pointerToA = &a;               /// Pointer to integer type holding the address of another integer (a)
    void *vpointerToA = &a;             /// This is a REFERENCE to the integer. 
    int b = *pointerToA;                /// Initialize by dereferencing a pointer to integer.
    int c = *((int *)vpointerToA);      /// Initialize by casting, then dereferencing a pointer to integer.



    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1;

    n1.value = 100;
    n1.next  = &n2;

    n2.value = 200;
    n2.next  = &n3;

    n3.value = 300;
    n3.next  = (struct entry *) 0;

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    
    struct entry newFella = {
        .value = 400,
        .next  = NULL
    };

    insertEntry(&newFella, &n1);
    list_pointer = &n1;
    while (list_pointer != (struct entry *) 0) {
        printf("after insert: %i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;


    
}