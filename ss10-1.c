#include<stdio.h>
int main(){
 	int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 	int number;
 	
 	printf("Nhap vao phan tu bat ky: ");
 	scanf("%d ", &number);
 	
 	int flag = -1;
 	
 	int size = sizeof(arr)/sizeof(int);
 	for(int i=0;i<size;i++){
 		if(arr[i]==number){
 			flag=i;
 			break;
		}
	}
 	if(flag!=1){
 		printf("Co phan tu trong mang tai vi tri: %d\n", flag);
    }else{
	 	printf("Khong cos trong mang");
    } 
 	return 0;
}
