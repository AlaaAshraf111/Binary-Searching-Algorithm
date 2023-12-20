/*@Eng.Amgad Basic Diploma*/
/*Binary_Search_Implementation_Driver*/
/*Auther:     Alaa Ashraf
**Date:       20December2023
**LastUpdate: 21December2023*/

#include <stdio.h>
#include "types.h"
#include "Binary_Search_Algorithm.h"

/*
*Function : Searching for a specific value in a sorted array
*Paratmers: - sorted_array[u16]: pointer to a sorted array where wanted to search
*           - sorted_array_size[u16]: size of the sorted array
*           - search_value[u16]: the value of searched element
*Return :   The index of the searched value or -1 for unsuccessful searching -index_of_search_value[s16]
*/
s16 BinarySearchFunction(u16 sorted_array[], u16 sorted_array_size, u16 search_value){

    //Definition of 3 indices for the start, middle and end of the sorted array
    u16 Start=0;
    u16 End = sorted_array_size-1;
    u16 Middle = ((Start + End)/2);

    //Return variable
    s16 searched_index =NOT_FOUND;  //Initially, assumming unsuccessful search

    for(u16 i =0; i< sorted_array_size ; i++){
        if(sorted_array[Middle] == search_value){
            searched_index = Middle;
            break;
        }
        //Check on if the value presents in the 1st half of the array
        else if(sorted_array[Middle] > search_value){
            //Updating the index End with (Middle index-1)
            End = Middle -1;  //(Middle index-1) as we checked on the middle in last if-comparison
            //Updating the inbex Middle
            Middle = ((Start + End)/2);
        }
        //Check on if the value presents in the 2nd half of the array
        else if(sorted_array[Middle] < search_value){
            //Updating the index Start with (Middle index+1)
            Start = Middle +1;  //(Middle index+1) as we checked on the middle in last if-comparison
            //Updating the inbex Middle
            Middle = ((Start + End)/2);
        }
        else{
            searched_index = NOT_FOUND;
        }
    }
    

    return searched_index;

}

/*
*Function : Printing the index of searched value in the given sorted array
*Paratmers: - index_of_search_value[s16]: The index of the searched value or -1 for unsuccessful searching
*Return :   void
*/
void PrintingSearchedValueIndex(s16 index_of_search_value){
    if(index_of_search_value == NOT_FOUND){
        printf("the searched value is not found");
    }else {
        printf("the searched index is %d", index_of_search_value);
    }
    
}
