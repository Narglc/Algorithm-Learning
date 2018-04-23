# Algorithm-Learning

## 计算函数运行所用时间
???
```
#include<time.h>

clock_t begin,end;
double cost;
begin=clock();
func();
end=clock();
cost=(double)(end-begin)/CLOCK_PER_SECS;
printf("耗时:%lf secs",cost);
```


## KMP算法 (2018-4-23)
Knuth-Morris-Pratt字符串查找算法，简称“KMP算法”。常用于在一个文本串S内查找一个模式串P 的出现位置，这个算法由Donald Knuth、Vaughan Pratt、James H. Morris三人于1977年联合发表，故取这3人的姓氏命名此算法。

**算法流程：**


