#include <unity.h>
extern void add(FILE * fp); 
extern FILE * del(FILE * fp);
extern void modify(FILE * fp);
extern void displayList(FILE * fp);
extern void searchRecord(FILE *fp);
extern void printChar(char ch,int n);
extern void printHead();

void setUp(void)
    {

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(add);
    RUN_TEST(del);
    RUN_TEST(modify);
    RUN_TEST(displayList);
    RUN_TEST(searchRecord);
    RUN_TEST(printChar);
    RUN_TEST(printHead);
    return(UnityEnd());

}
