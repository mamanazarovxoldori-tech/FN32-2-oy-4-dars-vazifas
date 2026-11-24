
#include <stdio.h>

int main() {
  int arr[5]={51,11,38,8,41};
  int *p=arr;
  int min=*p;

  for(int i=1;i<5;i++){
    if(*(p+i)<min){
      min=*(p+i);
    }
  }
  printf("Eng kichik element: %d\n",min);
  return 0;
}
