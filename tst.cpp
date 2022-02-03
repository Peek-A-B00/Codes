#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char ch[200];
    int count=0 ;
    printf("Type any sentence:-  ");
    fgets(ch,200,stdin);
    int l=strlen(ch);
    for ( int i=0 ; i < l ; ++i ){
        if( ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'
            ||ch[i]=='O'||ch[i]=='u'||ch[i]=='U'||ch[i]=='y'||ch[i]=='Y'){
                count = count+1 ;}
        }
        printf("\nThere Are %d Vowels In The Sentence . \n" , count );
}
