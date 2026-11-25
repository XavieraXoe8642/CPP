//实现自己的ls

//目标
    //实现 ls 的 -a、-l、-R、-t、-r、-i、-s 参数，并允许这些参数任意组合。
    //-R 需要对 / 的遍历测试。
    //界面美观（输出对齐、带颜色显示等）。

//参数功能
    //-a 查看所有文件
    //-l 以较长格式列出信息,长格式输出：权限、硬链接数、属主、属组、大小、修改时间、文件名
    //-R 递归显示子目录
    //-t 按修改时间顺序排列
    //-r 反向排序；常和 -t 搭配：ls -ltr → 最旧文件在前
    //-i 显示每个文件的 inode 号
    //-s 显示文件占用的磁盘块大小



#include<stdio.h>      //printf() fprintf() perror()
#include<unistd.h>     //getopt()
#include<dirent.h>     //opendir() readdir()  closedir()
#include<sys/stat.h>   //lstat() 
#include<pwd.h>        //getpwuid()
#include<grp.h>        //getgrgid()
#include<stdlib.h>     //qsort()
#include<time.h>       //strftime() 
#include<string.h>     //strcpy() strcat() strlen()
#include<stdlib.h>     //exit()


//系统自带的结构体
struct stat {
    dev_t     st_dev;     // 文件所在设备ID
    ino_t     st_ino;     // -i 要用：inode号
    mode_t    st_mode;    // -l 要用：文件类型 + 权限
    nlink_t   st_nlink;   // -l 要用：硬链接数
    uid_t     st_uid;     // -l 要用：所有者UID
    gid_t     st_gid;     // -l 要用：所属组GID
    dev_t     st_rdev;    // 特殊设备文件ID（ls一般不用）
    off_t     st_size;    // -l 要用：文件字节大小
    blksize_t st_blksize; // IO最优块大小（基本不用）
    blkcnt_t  st_blocks;  // -s 要用：占用512B块的数量，ls -s就是打印这个
    time_t    st_atime;   // 最后访问时间
    time_t    st_mtime;   // -t 要用：最后修改时间，用来排序
    time_t    st_ctime;   // 文件状态修改时间
};

//自定义结构体
struct File{
    mode_t permission;   //权限及类型
    nlink_t link;        //硬链接数
    uid_t st_uid;        // -l 要用：所有者UID
    gid_t st_gid;        // -l 要用：所属组GID
    off_t st_size;       // -l 要用：文件字节大小
    time_t st_mtime;     // -t 要用：最后修改时间，用来排序
    char name[20];       //文件名
    blkcnt_t st_blocks;  // -s 要用：占用512B块的数量，ls -s就是打印这个
    ino_t inode;         //inode 号

    //blksize_t block;  //磁盘块大小
    //clock_t time;     //CPU占用时间
} 


//1.解析参数
int parse(int argc,char *const argv[],int *opt_a,int *opt_l,int *opt_R,int *opt_t,int *opt_r,int *opt_i,int *opt_s)  
//const char *optstring合法选项字符
//int *opt_a,int *opt_l,int *opt_R,int *opt_t,int *opt_r,int *opt_i,int *opt_s
{
    int ch;
    *opt_a=0;
    *opt_l=0;
    *opt_R=0;
    *opt_t=0;
    *opt_r=0;
    *opt_i=0;
    *opt_s=0;
    //opt_xxx 就是记录本命令开了哪些ls选项的开关，先全部置零
    while((ch = getopt(argc,argv,"alRtris")) != -1)  
    {
        switch(ch)
        {
            case 'a':*opt_a=1; break;
            case 'l':*opt_l=1; break;
            case 'R':*opt_R=1; break;
            case 't':*opt_t=1; break;
            case 'r':*opt_r=1; break;
            case 'i':*opt_i=1; break;
            case 's':*opt_s=1; break;
            case '?':fprintf(stderr,"未知选项：-%c\n",optopt); // ? 是当输入getopt的为非规定的字符选项时的返回值
            default:break; //几乎跑不到，安全兜底
        }
    }

}

//原型getopt
//argc：main 的参数个数，直接传进来就行
//argv：main 的参数字符串数组
//optstring：选项描述字符串，标明支持哪些选项；字符后带冒号代表该选项需要参数
//头文件:
//#include <unistd.h>
//int getopt(int argc, char *const argv[], const char *optstring);
//配套的全局变量（也是系统自带，声明在 unistd.h）:
//extern char *optarg;    带参数选项的参数（我们ls短选项不用）
//extern int optind;      下一个待解析的argv下标，重点！
//extern int optopt;      出错的选项字符
//extern int opterr;      是否开启自动报错
//返回规则:
//• 成功读到一个合法选项：返回这个选项字符（'a'、'l'、'R'……）
//• 选项全部解析完：返回 -1
//• 遇到非法选项：返回 '?'
//（extern 是声明（declaration）关键字，意思：这个变量/函数是在别的地方定义的，这里只是告诉编译器它的类型，不分配内存。）


//2.目录遍历


//3.路径拼接


//4.排序


//5.-l配套打印函数


//6.-i配套打印函数


//7.-s配套打印函数


//8.错误处理


//9.主函数
int main(int argc,char *argv[])
{
    int opt_a=0, opt_l=0, opt_R=0, opt_t=0, opt_r=0, opt_i=0, opt_s=0;
    parse(argc, argv, &opt_a, &opt_l, &opt_R, &opt_t, &opt_r, &opt_i, &opt_s);
    


    return 0;
}