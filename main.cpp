#include <iostream>
#include "algorithm"
#include "vector"
using namespace std;

int main() {
  int testcases;
  cin >> testcases;
  for(int tests=0; tests < testcases ; tests++){
      long int n , k , p;
      cin >> n >> k >> p;
      int **input_array = new int*[n];
      for (int i =0; i < n ; ++i){
          input_array[i] = new int[k];
      }


      for(int i = 0 ; i < n ; i++){
          for (int j = 0 ; j < k ; j++){
              cin >> input_array[i][j];
          }
      }
      int *array_index = new int[n];
      for(int i = 0 ; i < n ;i++){
        array_index[i] = 0;

      }
      long int value = 0;
      while( p > 0 ){
          long int index =0 ;
          int max = input_array[0][array_index[0]];
          for(int i = 1 ; i < n ; i++){
              if(input_array[i][array_index[i]] > max ){
                  max = input_array[i][array_index[i]];
                  index = i;
              }
          }

          value = value + max;
          if(array_index[index] < k){
              array_index[index] = array_index[index] + 1;
          }
          p = p - 1;


      }
      cout <<"Case #"<<tests+1<<":"<<""<<value << endl;
  }

}
