# Basic of Asymptotic Analysis (part 1)

The efficiency of a data structure is measured in terms of time and space.

An ideal data structure minimizes both memory usage and execution time.
In this section, we focus on time complexity.

## Concept of a Linked List:

A linked list is a collection of nodes.
Each node contains:

1. Thea actual data.
2. A pointer (address) to the next node in the list.

This pointer is what “links” the nodes together.
The first node is usually referenced by a head pointer, and the last node points to NULL, indicating
the end of the list.

## Efficiency Example

Inserting an element at the beginning of a linked list is very fast — typically O(1) — because it only
requires updating a few pointers.

In contrast, inserting at the beginning of an array requires shifting all existing elements to make
room, which takes O(n) time as the array grows.
