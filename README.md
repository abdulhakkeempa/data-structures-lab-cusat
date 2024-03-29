# Data Structures Lab - CUSAT ( S2 )
All the Programs under the course __[ 21-805-0206 ] Data Structures Lab__ in Integrated M.Sc in Computer Science ( Artificial Intelligence and Data Science ) from Cochin University of Science and Technology
## Program
- [x] [1. Inserting and deleting an element from an Array](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/arrayInsertionDeletion/src/arrayInsertionDeletion.cpp)
- [x] [2. Linear Search](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/linearSearch/src/linearSearch.cpp)
- [x] [3. Binary Search](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/binarySearch/src/binarySearch.cpp)
- [x] [4. Ternary Search](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/ternarySearch/src/ternaySearch.cpp)
- [x] [5. Interpolation Search](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/interpolationSearch/src/interpolationSearch.cpp) 
- [x] [6. Fibonacci Search](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/fibonacciSearch/src/fibonacciSearch.cpp)
- [x] [7. Selection Sort](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/selectionSort/src/selectionSort.cpp)
- [x] [8. Bubble Sort](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/bubbleSort/src/bubbleSort.cpp)
- [x] [9. Insertion Sort](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/insertSort/src/insertSort.cpp)  
- [x] [10. Merge Sort](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/mergeSort/src/mergeSort.cpp)  
- [x] [11. Substring Extraction](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/subString/src/subString.cpp)
- [x] 12. Pattern Matching
- [ ] 13. Insertion of String, Deletion of string and Replacement of substring as each functions in a program. 
- [x] [14. Transpose of a sparse matrix](sparseMatrix/src/sparseMatrix.cpp)
- [ ] [15. Addition of sparse matrix](sparseMatrix/src/sparseMatrix.cpp)
- [x] [16. Saddle point](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/saddlePoint/src/saddlePoint.cpp)
- [x] [17. Program to add two polynomials using array.](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/addPolynomial/src/addPolynomial.cpp) 
- [x] [18. Searching an item in linked list.](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/linkedList/src/linkedList.cpp) 
- [x] [19. Insertion of a node to a sorted link list.](insertToLinkedList/src/insertToLinkedList.cpp)
- [x] [20. Merge two sorted list into a single sorted list.](mergeLinkedList/src/mergeLinkedList.cpp)
- [x] [21. Deletion from the linked list.](linkedList/src/linkedList.cpp) 
- [x] [22. Program to add two polynomial using linked list.](polyLinkedList/src/polyLinkedList.cpp)
- [ ] 23. Implement Insertion and Deletion operation for Circular Header List. 
- [ ] 24. Searching an item in the Two-way linked list. 
- [ ] 25. Deletion and insertion of node in two way list
- [x] 26. Push and pop in stack using array and linked list.
* a . [Array](stackUsingArray/src/stackUsingArray.cpp)
* b . [LinkedList](stackUsingLinkedList/src/stackUsingLinkedList.cpp)
- [x] [27. Create a Binary search tree and perform traversal (search), insert and delete on the tree.](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/binarySearchTree/src/binarySearchTree.cpp)
- [x] [28. Quick Sort.](quickSort.cpp) 
- [ ] [29. Queue insertion and deletion (Array) ]()
- [ ] [30. Queue insertion and deletion (LinkedList)]()
## Assignment
- [x] [1.Magic Square](https://github.com/hakkeempa/Data_Structures_Lab-CUSAT/blob/main/magicSquare.cpp)

## Algorithms
### Binary Search
```
MID = (BEGIN+END)/2
```
### Ternary Search
```
MID1 = BEGIN + (END-BEGIN)/3
MID2 = END - (END-BEGIN)/3
```
### Interpolation Search
```
POS = BEG + [[ITEM - ARRAY[BEG] * [END - BEG]]/[DATA[END]-DATA[BEG]]]
```

## Time Complexity
### Linear Search - O(n)
### Binary Search - O( log<sub>2</sub>(n) )
### Ternary Search - O( log<sub>3</sub>(n) )
### Interpolation Search - O( log<sub>2</sub>(log<sub>2</sub>(n)) )
### Fibonacci Search - O( log(n ) )
### Selection Sort - O( n<sup>2</sup> )
### Bubble Sort - O( n<sup>2</sup> )
### Merge Sort - O( n log<sub>2</sub>( n ) )  

<br>  

## Menu Driven Template Code 
```
	int mainOption,loopOption=1;
	while (loopOption==1){
		cout<<"{{Switch Options}}"<<endl;
		cin>>mainOption;
		switch (mainOption) {
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			default:
				cout<<"Invalid Statement"<<endl;
				break;
		}
		cout<<"Do you want to continue\n1.Continue\n2.Quit"<<endl;
		cin>>loopOption;
	}
	cout<<"Succesfully Exited!"<<endl;
```
