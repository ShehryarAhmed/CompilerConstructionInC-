#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
      char ch[4];
    int tot = 0;
    FILE *fp;
    fp = fopen("checks.txt","r");
    cout << "Count Tokens form file checks.txt ";
    while((ch[0]=fgetc(fp))!=EOF)
        {
            if(ch[0]=='#' &&(ch[1]=fgetc(fp))=='i' && (ch[2]=fgetc(fp))=='n' &&(ch[3]=fgetc(fp))=='c'){
                tot = tot+1;
            }
            else  if(ch[0]=='v' &&(ch[1]=fgetc(fp))=='o' && (ch[2]=fgetc(fp))=='i' &&(ch[3]=fgetc(fp))=='d'){
                tot = tot+1;
            }
            else if(ch[0]=='m' &&(ch[1]=fgetc(fp))=='a' && (ch[2]=fgetc(fp))=='i' &&(ch[3]=fgetc(fp))=='n')
            {
                tot = tot+1;
            }
            else if(ch[0]=='(')
            {
                tot = tot+1;
            }
            else if(ch[0]=='{')
            {
                tot = tot+1;
            }
            else if(ch[0]=='i' &&(ch[1]=fgetc(fp))=='n' && (ch[2]=fgetc(fp))=='t')
            {
                tot = tot+1;
            }
            else if(ch[0]=='c' &&(ch[1]=fgetc(fp))=='h' && (ch[2]=fgetc(fp))=='a' &&(ch[3]=fgetc(fp))=='r')
            {
                tot = tot+1;
            }
        }
        fclose(fp);

        printf("total = %d",tot);
        printf("%c and %d",ch[0],fgetc(fp));
                return 0;
}
