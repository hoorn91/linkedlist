#include <stdio.h>
#include "../inc/node.h"
#include <stdlib.h>

NodeS* pushToListEnd(NodeS* head)
{
  NodeS* current = head; 
  // List is empty, simply add
  if(current == NULL)
  {
    current = malloc(sizeof(NodeS));
    current->personData.age = 27;
    current->personData.role = ROLE_SOFTWARE_ARCHITECT;
    current->next = NULL;

    return current;
  }

  // Find last element
  while (current->next != NULL)
  {
    current = current->next;
  }
 
  current->next = malloc(sizeof(NodeS));
  current->next->personData.age = 127;
  current->next->personData.role = ROLE_SOFTWARE_DEVELOPER;
  current->next->next = NULL;

  return current;
}


int main()
{
  // Initialize the list as empty
  NodeS* head = NULL;
  head = pushToListEnd(head);
  // malloc failed, error case
  if (head == NULL) {
    return 1;
  }
  printf("%d\n", head->personData.age);
  head = pushToListEnd(head);
  printf("%d\n", head->next->personData.age);
  return 0;
}
