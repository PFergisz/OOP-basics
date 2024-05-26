#include "StudentList.h"

void show(TStudent* head){
    std::cout << "Aktualny stan listy: " << std::endl;
    if(head==NULL)
        std::cout << "Lista jest pusta";
    else
        while(head){
            std::cout << "id: " << head -> _id << std::endl;
            head=head->_next;
        }
    std::cout << std::endl;
}

TStudent* InitTStudent(){
    // TStudent *temp=new TStudent;
    TStudent* temp=(TStudent*)malloc(sizeof(TStudent));
    if(temp==NULL){
        std::cout <<"Blad alokacji pamieci." << std::endl;
        return nullptr;
    }
    return temp;
}

TStudent* push_front(TStudent** head, int value){
    // TStudent *temp=new TStudent;
    TStudent* temp=(TStudent*)malloc(sizeof(TStudent));
    if(temp==NULL){
        std::cout <<"Blad alokacji pamieci." << std::endl;
        return nullptr;
    }
    temp->_id = value;
    temp->_next = *head;
    *head = temp;
    return *head;
}

void clear(TStudent** head){
    while(*head!=nullptr){
        TStudent* temp=(*head)->_next;
        free(*head);
        // delete *head;
        *head=temp;
    }
head=nullptr;
}




