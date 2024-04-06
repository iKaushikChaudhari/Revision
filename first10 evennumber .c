#include <stdio.h>

int main() {
    printf("The First 10 Even Numbers:\n");
    int i = 1,cnt=0;
    while (cnt!=10) {
    	if(i%2==0){
    		printf("%d\n",i);
    		cnt++;
		}
		i++;
    }
    return 0;
}

