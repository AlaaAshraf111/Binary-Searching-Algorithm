/*@Eng.Amgad Basic Diploma*/
/*Binary_Search_Implementation_Driver*/
/*Auther:     Alaa Ashraf
**Date:       20December2023
**LastUpdate: 20December2023*/

#ifndef __BINARY_SEARCH_ALGORITHM__
#define __BINARY_SEARCH_ALGORITHM__

//Checking for unsuccessful searching
#define NOT_FOUND -1


/*
*Function : Searching for a specific value in a sorted array
*Paratmers: - sorted_array[u16]: pointer to a sorted array where wanted to search
*           - sorted_array_size[u16]: size of the sorted array
*           - search_value[u16]: the value of searched element
*Return :   The index of the searched value or -1 for unsuccessful searching -index_of_search_value[s16]
*/
s16 BinarySearchFunction(u16 sorted_array[], u16 sorted_array_size, u16 search_value);

/*
*Function : Printing the index of searched value in the given sorted array
*Paratmers: - index_of_search_value[s16]: The index of the searched value or -1 for unsuccessful searching
*Return :   void
*/
void PrintingSearchedValueIndex(s16 index_of_search_value);





#endif