// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  if(empty()){
    vdata.push_back(value);
    return;
  }
  for(unsigned int i = 0; i < vdata.size();i++){
    if(value > vdata.at(i)){
      vdata.insert(vdata.begin()+i,value);
      return;
    }
  }
  vdata.push_back(value);
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  vdata.pop_back();
}

// Returns the minimum element in the heap
int Heap::top(){
  return vdata.back();
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  return vdata.size() == 0;
}
