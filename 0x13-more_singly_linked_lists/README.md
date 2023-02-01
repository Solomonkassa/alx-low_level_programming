0x13-more_singly_linked_lists
-----------------------------------------------------------------------------------------------------------------------------------------------------------
##The free_listint function is used to free a linked list of type listint_t. The linked list is represented by a pointer to the head of the list, which is passed as an argument to the function.

##The function starts by initializing a temporary pointer temp to NULL. The function then enters a loop that continues until the head pointer is NULL, indicating that the end of the list has been reached.

##In each iteration of the loop, the temporary pointer temp is assigned the value of the head pointer, effectively storing a reference to the current node. The head pointer is then updated to point to the next node in the list, by assigning it the value of the next field of the current node. Finally, the memory occupied by the current node is freed by calling the free function and passing temp as an argument.

##This process is repeated until the end of the list has been reached and the head pointer is NULL, at which point the loop terminates and the memory occupied by the entire linked list has been freed.




