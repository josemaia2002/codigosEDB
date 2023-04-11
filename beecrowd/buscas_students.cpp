/*!
 * Several types of search algorithms in an array.
 * @date june 14th, 2021
 * To compile in terminal: g++ -Wall -std=c++11 buscas_students.cpp -o busca
 */

#include <iostream>
#include <string>
using std::string;
#include <cassert>
#include <sstream>
using std::ostringstream;

// Alias to make code easier to mantain.
using value_t = int;
// typedef int value_t;
using index_t = size_t;

/// Execute an iterative binary search on an array.
int binary_search(value_t A[], value_t target, index_t l, index_t r) {
  int lo, mid, hi;
  lo = l;
  hi = r;

  while(lo <= hi){
    mid = (lo+hi)/2;
    if(A[mid] == target)
      return mid;
    else if(A[mid] < target)
      lo = mid + 1;
    else
      hi = mid - 1;
  }

  return -1;
}

/// Execute an iterative binary search on an array.
int binary_search_ptr(value_t target, value_t *first, value_t *last) {
  int *count = last - first;
  int *step = count/2;
  int *mid = first + step;

  while(first <= last){
    count = last - first;
    step = count/2;
    mid = first + step;
    if(*mid == target) 
      return mid;
    else if(*mid < target)
      count = step;
    else
      count = count - (step+1);
  }
  return -1;
}

/// Execute a recursive binary search on an array.
int binary_search_rec(value_t A[], value_t target, index_t l, index_t r) {
  // TODO
  return -1;
}

/// Execute a linear search on an array.
int linear_search(value_t A[], value_t target, index_t l, index_t r) {
    for(int i = l; i <= r; i++){
      if(A[i] == target)
        return i;
    }
    return -1;
}

/// Execute a recursive linear search on an array.
int linear_search_rec(value_t A[], value_t target, index_t l, index_t r) {
    //   TODO
}

/// Converts and returns the content of the array represented as a string.
std::string to_string(value_t A[], index_t l, index_t r) {
    std::ostringstream oss;
    oss << "[ ";
    for ( index_t i{l} ; i <= r ; ++i )
        oss << A[i] << (i<r ? ", ":" ") ;
    oss << "]";
    return oss.str();
}

int main(void) {
  value_t A[] = {1, 3, 5, 6, 18, 20, 35, 47}; // Array
  size_t sz = sizeof(A) / sizeof(A[0]);
  value_t target{3};

  // Show the search domain
  std::cout << ">>> Looking for target value `" << target
            << "' in the range:\n";
  std::cout << "    A: " << to_string(A, 0, sz-1) << "\n";

  // Read from the standard input the target value.
  std::cout << ">>> Target? ";
  std::cin >> target;
  std::cout << '\n';

  // Call the search algorithm
  std::cout << ">>> Executando a Busca ...\n";
  int result = binary_search_ptr(target, A, A+(sz-1));

  // Print the result
  if ( result == -1 )  std::cout << "    Target not found!\n";
  else                 std::cout << "    Target located at index " << result << "\n";

  std::cout << "\n>>> Normal ending...\n\n";

  return EXIT_SUCCESS;
}

