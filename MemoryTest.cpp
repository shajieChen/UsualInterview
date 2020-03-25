#include <iostream> 

// 联合体
int test(int tsetI){
	union judge{
		int i;
		char j;
	}u;
	u.i=tsetI;
	return u.j;
}

/**
 * 用于测试编译器是从大端读取还是 从小端读取
 * 
 */
int main(int argc, char const *argv[])
{	
    int i=1;
	char *b=(char*)&i;
	if(*b==1){
		printf("little\n");
	}else{
		printf("big\n");
	}
	return 0;
    /* code */
    return 0;
}