#include<stdio.h>

/******************************************************

结构体的定义
声明一个结构体类型的一般形式为：
struct 结构体名 {
    成员列表
};


 ******************************************************/

struct student {
    int     num;
    char    name[20];
    char    sex;
    int     age;
    float   score;
    char    addr[30];
};

int main(void)
{
    printf("****************************************\n");

    struct student stu001 = {1, "LingLing Yao", 'F', 18, 88, "Suzhou"};

    printf("学 生 信 息 如 下:\n");
    printf("学号: %d\n", stu001.num);
    printf("姓名: %s\n", stu001.name);
    printf("年龄: %d\n", stu001.age);
    printf("分数: %f\n", stu001.score);

    printf("****************************************\n");
}
