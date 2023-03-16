## Doubly Linked Lists

This repository contains C code that implements various functions for a doubly linked list data structure.
Description

A doubly linked list is a data structure that consists of a set of sequentially linked nodes. Each node contains a value and two pointers, pointing to the previous and the next nodes in the list.

Unlike singly linked lists, which can only be traversed in one direction, doubly linked lists allow traversal in both directions, making them a more flexible data structure. However, this flexibility comes at the cost of increased complexity, as the implementation of a doubly linked list requires additional pointers to be managed.
Repository Contents

-This repository contains the following files:

    `lists.h`: header file containing the definition of the listint_t struct and the prototypes of all the functions in this project.
    `1-print_dlistint.c`: function that prints all the elements of a listint_t doubly linked list.
    `2-add_dnodeint.c`: function that adds a new node at the beginning of a listint_t doubly linked list.
    `3-add_dnodeint_end.c`: function that adds a new node at the end of a listint_t doubly linked list.
    `4-free_dlistint.c`: function that frees a listint_t doubly linked list.
    `5-get_dnodeint.c`: function that returns the nth node of a listint_t doubly linked list.
    `6-sum_dlistint.c`: function that returns the sum of all the data (n) of a listint_t doubly linked list.
    `7-insert_dnodeint.c`: function that inserts a new node at a given position in a listint_t doubly linked list.
    `8-delete_dnodeint.c`: function that deletes a node at a given position in a listint_t doubly linked list.
    `100-password`: password for the crackme4 executable.
    `102-result`: the largest palindrome made from the product of two 3-digit numbers.
    `README.md`: this file, containing a description of the repository and its contents.

## Requirements

To use the code in this repository, you will need the following:

    Ubuntu 20.04 LTS
    GCC 6.8.4

## Usage

To use the functions in this repository, follow these steps:

    Clone the repository: git clone https://github.com/solomonkassa/Alx-low_level_programming.git
    Change into the directory containing the desired function: cd Alx-low_level_programming/0x17-doubly_linked_lists
    Compile the function with a main function and the header file lists.h: gcc -Wall -Werror -Wextra -pedantic <main file> <function file> lists.h -o <output file>
    Run the program: ./<output file>

## Authors

This repository contains code written by `Solomon Kassa` for the ALX School program.
