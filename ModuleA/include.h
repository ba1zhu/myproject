typedef struct
{
	char xh[5];
	char name[15];
	char cla[100];
	int xf;
}STU;
STU stu[1000];
typedef struct node
{
	char bh[5];
	char name[15];
	char xz[10];
	char xs[5];
	int xf;
	int rs;
	int sx;
	struct node *next;
}CLA;
CLA *cla;
int rens;
int kecs;
int stu1();
int cla1();
