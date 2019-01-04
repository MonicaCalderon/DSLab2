#include "List.hpp"
#include "ListNode.hpp"
#include <iostream> //includes NULL
#include <curses.h> //includes cout
#include <stdlib.h>//Includes rand

using namespace std;

List::List()
{

}

List::List(int start, int end, int step)
{
    for (int i=start;i<=end;i = i + step)
    {
        insert(list,i);
    }
    showList(list);
}

ListNode* List::getList(){
    return this->list;
    }

void List::insert(ListNode *&list, int n)
{
    ListNode *newNode = new ListNode();
    newNode->data = n;
    
    ListNode *aux1 = list;
    ListNode *aux2;
    
    while((aux1 != NULL) && (aux1->data < n))
    {
        aux2 = aux1;
        aux1 = aux1->next;
    }
    
    if(list== aux1)
    {
        list = newNode;
    }
    else
    {
        aux2->next = newNode;
    }
    
    newNode->next = aux1;
}

void List::showList(ListNode *list)
{
    ListNode *actual = new ListNode();
    actual = list; //actual señala la primera posición de la lista
    
    
    while(actual != NULL)//termina de recorrer la lista cuando actual == NULL
    {
        cout<<actual->getData()<<" -> ";//Mostrar la info que hay en el nodo donde apunta actual
        actual = actual->getNext(); //actual avanza una pos
    }
    cout<<endl;
}
bool List::searchInList(int e)
{
    bool is = false;
    ListNode *actual = new ListNode();
    actual = list;
    
    while((actual != NULL) && (actual->getData() <= e))
    {
        if(actual->getData() == e)
        {
            is = true;
        }
        actual = actual->getNext();
    }
	return is;
}

void List::remove(int r)
{
    if(searchInList(r)==true)
    {
        ListNode *auxRemove;
        ListNode *previous = NULL;
        auxRemove = list;
        
        //Recorre la lista
        while((auxRemove != NULL) && (auxRemove->data != r))
        {
            previous = auxRemove;
            auxRemove = auxRemove->next;
        }
        
        //Si no encuentra el elemento
        if(auxRemove == NULL)
        {
            cout<<"The element doesn't exit";
        }
        //Si es el primer elemento el que vamos a borrar
        else if (previous == NULL)
        {
            list = list->next;
            delete auxRemove;
        }
        //El elemento esta en la lista pero no es el primer nodo
        else
        {
            previous->next = auxRemove->next;
            delete auxRemove;
        }
    }
}

int List::getStart() {
	return this->start;
}

void List::setStart(int sta){
        start= sta;
}

int List::getEnd() {
	return this->end;
}

void List::setEnd(int e){
        end= e;
}

int List::getStep () {
	return this->step;
}

void List::setStep(int ste){
        step= ste;
    }