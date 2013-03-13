// This is the main DLL file.

#include "stdafx.h"

#include "SelectionSort.h"

void SelectionSort( int * arr, int size ){
	if( size <= 0 ){ return; }
	for( int i=1; i<size; i++ ){
		if( arr[0] > arr[i] ){
			int temp = arr[i];
			arr[i] = arr[0];
			arr[0] = temp;
		}
	}
	SelectionSort(arr+1,size-1);
}