#include <stdio.h>

int single(int arr[],int n){
  int result = 0;
  for(int i = 0;i < n;i++){
    result ^= arr[i];
  }
  return result;
}

int main(void){

  //get number of test cases
  int m;
  scanf("%d", &m);
  int outcome[m];
  for(int i = 0;i < m;i++){
    //get number of elements of each array
    int n;
    int singleNum;
    scanf("%d",&n);
    int array[n];
    for(int j = 0;j < n;j++){
      scanf("%d",&array[j]);
    }
    //find the number
    singleNum = single(array, n);
    //store the number
    outcome[i]=singleNum;

  }
  for(int i = 0;i < m; i++){
    printf("%d\n",outcome[i]);
  }

  return 0;

}
