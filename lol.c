#include <stdio.h>
#include <stdlib.h>

typedef struct _Heap{
  int size;
  int **arr;
  int i;
} Heap;

Heap* createHeap(int size); 

int main(){

  Heap* heap = createHeap(10);



  printf("holis mundo");
  return 0;
}

  void sort(Heap* heap){
    int last_value = heap->arr[heap->size];
  }

  void add(Heap* heap, int data){
    heap->arr[heap->i] = data;
    heap->i++;
  }

  Heap* createHeap(int size){

    if(size < 1) return NULL;

    Heap* heap = (Heap*) malloc(sizeof(struct _Heap));
  
    heap->size = size;
    heap->arr = (int**)malloc(sizeof(int*)*size);
    heap->i = 1;

    if(heap->arr == NULL){
      free(heap->arr);
      free(heap);
      return NULL;    
    }

    return heap;
  }