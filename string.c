#include <stdlib.h>
/*
	Function that receives a string as a parameter and
	returns the length of that string
*/
int my_strlen(char *s)
{
	int i;
	for(i=0; i<30; i++)
		if(*(s+i) == '\0')
		break;
	return i;
}

    
/*
	Converts all small characters in a string to upper case 
	characters and returns the number of changed characters
*/
int str2upper(char *s)
{
	int i, k=0;
	int pointer_size = my_strlen(s);
	for(i=0;i<=pointer_size;i++)
	{
		if(*(s+i)>=97 && *(s+i)<=122)
		{
			*(s+i)=*(s+i)-32;
			k+=1;
		} 
	}
	return k;
}

    

/*
	Converts all capital characters to lower case characters 
	in string. Function returns the number of changed characters
*/
int str2lower_(char *s)
{
	int i, k=0;
	int pointer_size = my_strlen(s);
	for(i=0;i<=pointer_size;i++)
	{
		if(*(s+i)>=65 && *(s+i)<=90)
		{
			*(s+i)=*(s+i)+32;
			k+=1;
		} 
	}
	return k;
}

    
/*
	removes all occurrences of numbers, Function returns new 
	length of the string
*/
int str_strip_numbers(char *s)
{
	int i, j=0, k=0;
	int pointer_size = my_strlen(s);
	for(i=0;i<=pointer_size;i++)
	{
		if(*(s+i)>=48 && *(s+i)<=57)
		{
			*(s+j)=*(s+i);
			j++;
			k+=1;
		} 
	}
	*(s+j)='\0';
	return pointer_size-k;
}

    
/*Function that will copy the content of string s to string d*/
void mystrcpy(char *s,char *d)
{
	int i;
	for(i=0; i<30; i++)
	{
		*(d+i) = *(s+i);
		if(*(s+i) == '\0') break;
	}
}
    
/*
	Function that will compare two strings together. Function returns 
	place (n) of first different character 
        -n if s is ordered before in alphabet that d
        0 if strings are equal
        +n if d is ordered before s
*/
int mystrcmp (char *s, char *d)
{
	int i=0, k=0;
	
	int size_s = my_strlen(s);
	int size_d = my_strlen(d);
	int size = size_s;

	if (size_s > size_d)
	{
		size = size_d;
	} 
	 
	for(i=0; i<=size; i++)
	{
		if(*(s+i) != *(d+i))
		{
			if(*(s+i)< *(d+i) || *(s+i)== '\0')
			{
				k=-(i+1);
				break; 
			}
			else if(*(s+i)> *(d+i) || *(d+i)== '\0')
			{
				k=i+1;
				break;
			}
		}
		else
		{
			k=0;
		}
	} 
	return k;
}

    
/*Creates a duplicate of a string s and returns a pointer to newly created string*/
char *strdupl(char *s)
{
	int i;
	char *p;
	p = (char *)malloc(my_strlen(s));
	p = s;
	return p;
}

    
