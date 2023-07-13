#include <bits/stdc++.h>
using namespace std;
int main()
{
  char ch[100],temp[100];
  FILE *fi,*fo;
  fi = fopen("output.txt","r+");
  fo = fopen("output_clean.txt","w+");
  long int i = 0;
  while(i < 1025)
  {
    int flag = 0;
    strcpy(ch,temp);
    fscanf(fi,"%s",ch);
    if(strlen(ch) == 16)
    {
      //cout << ch << "\n";
        fprintf(fo, "%s\n",ch);
        //cout << "yo" ;
        i++;
    }
  }
}