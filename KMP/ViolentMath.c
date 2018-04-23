#include<stdio.h>
#include<string.h>

//暴力匹配算法
int violentMatch(char* S,char* P){
	int lenS=strlen(S);
	int lenP=strlen(P);

	int i,j=0;
	for(i=0;i<(lenS-lenP+1);i++){
		for(j=0;j<lenP;j++){
			if(S[i+j]!=P[j]){
				break;
			}else if(j==lenP-1){
				return i;
			}
		}
	}
	return -1;
}

int betterViolentMatch(char* S,char* P){
	int lenS=strlen(S);
	int lenP=strlen(P);

	int i,j=0;
	while(i<lenS && j<lenP){
		//1. 如果当前字符串匹配成功，则i++，j++
		if(S[i]==P[j]){
			i++;j++;
		}else{
		//2. 如果失配，令i=i-(j-1),j=0
			i=i-j+1;j=0;
		}
	}

	//匹配成功，返回模式串P在S的位置，否则返回-1
	if(j==lenP){
		return i-j;
	}else{
		return -1;
	}
}

main(){
	//字符串赋值用法及实际长度
	char sr[78]="f3irjigj";
	printf("长度为%d\n",strlen(sr));
	
	//测试案例
	char* stringS="BBC ABCDAB ABCDABCDABDE";
	char* stringP="ABCDABD";

	int index=0;
	index=violentMatch(stringS,stringP);
	
	if(index==-1){
		printf("在字符串S中未找到字符串P！\n");
	}else{
		printf("结果为:%d\n",index);
	}
	
	int betterIndex=betterViolentMatch(stringS,stringP);
	printf("better result:%d\n",betterIndex);
}
