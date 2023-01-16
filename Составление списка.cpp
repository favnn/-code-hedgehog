#include <iostream>
using namespace std;

int main() 
{

    struct Point 
    {
        double number;
        Point* next = NULL;
        Point* prev = NULL;
    };

    Point* head = NULL;
    Point* end = NULL;
    Point* p = new Point();

    while(cin >> p->number)
    {
        p->next = NULL;

        if (head == NULL)
        {
            head = p;
            end = p;
        }
        else
        {
            p->prev = end;
            end->next = p;
            end = end->next;
        } 
        
    int i = 0;
    Point* current = head;

        while (current != NULL)
        {
            i++;
            cout << current->number << " ";
            current = current->next;
        
            break;
        }
    }
    return 0;
}
