# Sorting Algorithms & Big O

## **Learning Objectives**
- learning sorting algorithms that puts elements of a list into an order.

## **General**
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## **TASKS**


**0. Bubble sort**

Write a function that sorts an array of integers in ascending ord er using the Bubble sort algorithm

- Prototype: void bubble_sort(int *array, size_t size);
- You’re expected to print the array after each time you swap two e lements (See example below)
- Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case


**1. Insertion sort**

Write a function that sorts a doubly linked list of integers in a scending order using the Insertion sort algorithm

- Prototype: void insertion_sort_list(listint_t **list);
- You are not allowed to modify the integer n of a node. You have t o swap the nodes themselves.
- You’re expected to print the list after each time you swap two el ements (See example below)
- Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case


**2. Selection sort**

Write a function that sorts an array of integers in ascending ord er using the Selection sort algorithm

- Prototype: void selection_sort(int *array, size_t size);
- You’re expected to print the array after each time you swap two e lements (See example below)
- Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case


**3. Quick sort**

Write a function that sorts an array of integers in ascending ord er using the Quick sort algorithm

- Prototype: void quick_sort(int *array, size_t size);
- You must implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition bein g sorted.
- You’re expected to print the array after each time you swap two e lements (See example below)
- Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case


**4. Shell sort - Knuth Sequence**

Write a function that sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence

- Prototype: void shell_sort(int *array, size_t size);
- You must use the following sequence of intervals (a.k.a the Knuth sequence):
n+1 = n * 3 + 1
1, 4, 13, 40, 121, ...
- You’re expected to print the array each time you decrease the interval (See example below).

**5. Cocktail shaker sort**

Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

- *Prototype: void cocktail_sort_list(listint_t **list);*
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements (See example below)
- Write in the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case


**6. Counting sort**

Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

- *Prototype: void counting_sort(int *array, size_t size);*
- You can assume that array will contain only numbers >= 0
- You are allowed to use malloc and free for this task
- You’re expected to print your counting array once it is set up (See example below)
- This array is of size k + 1 where k is the largest number in array
- Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

1. in the best case
2. in the average case
3. in the worst case

*Each test case has been verified and project done to standard by*

**AUTHORS**

Myra Jarenga - @myrajarenga on   [Github](https://github.com/myrajarenga "Github")

Laban Rotich - @laban254 on  [Github](https://github.com/myrajarenga "Github")
