0x13-more_singly_linked_lists
-----------------------------------------------------------------------------------------------------------------------------------------------------------
##The free_listint function is used to free a linked list of type listint_t. The linked list is represented by a pointer to the head of the list, which is passed as an argument to the function.

##The function starts by initializing a temporary pointer temp to NULL. The function then enters a loop that continues until the head pointer is NULL, indicating that the end of the list has been reached.

##In each iteration of the loop, the temporary pointer temp is assigned the value of the head pointer, effectively storing a reference to the current node. The head pointer is then updated to point to the next node in the list, by assigning it the value of the next field of the current node. Finally, the memory occupied by the current node is freed by calling the free function and passing temp as an argument.

##This process is repeated until the end of the list has been reached and the head pointer is NULL, at which point the loop terminates and the memory occupied by the entire linked list has been freed.

##The function get_nodeint_at_index takes two arguments: head and index. head is a pointer to the head of the linked list, which is of type listint_t (defined in the code). index is an unsigned integer that represents the position of the node in the linked list, where the first node has an index of 0, the second node has an index of 1, and so on.

##The function uses a for loop to traverse the linked list, starting from the head node. The loop continues until either node is NULL (i.e., the end of the linked list has been reached) or i is equal to index. The loop increments i at each iteration, and updates node to point to the next node in the linked list by accessing the next member of the current node.

##At the end of the loop, if i is equal to index, the function returns node, which points to the index-th node. Otherwise, if node is NULL, the function returns NULL, indicating that the node at the given index does not exist.


