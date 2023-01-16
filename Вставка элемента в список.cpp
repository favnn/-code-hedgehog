#include <iostream>
using namespace std;

struct Node // структура для хранения данных в списке 
{ 
 int data; 
 Node *next; 
} 
*first, *current; // указатели на первый и текущий элемент списка 

// функция для вставки элемента в нужную позицию 
void insert_elem(int value, int position) 
{
    
  if(position == 1) 
  { // если необходимо вставить элемент в начало списка 
    current = new Node;
    current -> data = value; 
    current -> next = first; 
    first = current;
    return; 
  } 
  
  Node *previous = first; 
  
  for(int i = 1; i < position-1; ++i) 
  { 
    previous = previous -> next; 
  } 
  current = new Node;
  current -> data = value; 
  current -> next = previous -> next; 
  previous -> next = current; 
} 


int main() 
{
    int n, x, k;
    cout << "Введите длину списка: ";
    cin >> n;
    cout << "Введите список чисел: ";
    first = new Node;
    cin >> first->data;
    current = first; 
    for (int i=1; i < n; i++) 
    { 
      current->next=new Node; 
      current=current->next; 
      cin >> current->data; 
    } 
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите место k для вставки элемента: ";
    cin >> k;
    insert_elem(x, k);

    current = first; 
    while (current != NULL) 
    { 
      cout << current->data << " "; 
      current = current->next; 
    } 
    cout << endl;
    
    return 0; 
}
