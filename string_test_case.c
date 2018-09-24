#include <gtest/gtest.h>
#include <stdlib.h>
#include "string.h"


/*
	Function that receives a string as a parameter and
	returns the length of that string
*/
TEST(MytestCategory,MyStrlenTEst1)
{
     char string_s[]="Hello";
     char len;

    len=my_strlen(string_s);
    EXPECT_EQ(5,len);
}
TEST(MytestCategory,MyStrlenTEst2)
{
     char string_s[]="F11Nish";
     char len;

    len=my_strlen(string_s);
    EXPECT_EQ(7,len);
}
TEST(MytestCategory,MyStrlenTEst3)
{
     char string_s[]="wor!d!";
     char len;

    len=my_strlen(string_s);
    EXPECT_EQ(6,len);
}
TEST(MytestCategory,MyStrlenTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char len;

    len=my_strlen(string_s);
    EXPECT_EQ(25,len);
}
TEST(MytestCategory,MyStrlenTEst5)
{
     char string_s[]="";
     char len;

    len=my_strlen(string_s);
    EXPECT_EQ(0,len);
}


/*
	Converts all small characters in a string to upper case 
	characters and returns the number of changed characters
*/
TEST(MytestCategory,MyUpperTEst1)
{
     char string_s[]="Hello";
     char upp;
	
	upp=str2upper(string_s);
    EXPECT_EQ(4,upp);
}
TEST(MytestCategory,MyUpperTEst2)
{
     char string_s[]="F11Nish";
     char upp;
	
	upp=str2upper(string_s);
    EXPECT_EQ(3,upp);
}
TEST(MytestCategory,MyUpperTEst3)
{
     char string_s[]="wor!d!";
     char upp;
	
	upp=str2upper(string_s);
    EXPECT_EQ(4,upp);
}
TEST(MytestCategory,MyUpperTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char upp;
	
	upp=str2upper(string_s);
    EXPECT_EQ(22,upp);
}
TEST(MytestCategory,MyUpperTEst5)
{
     char string_s[]="";
     char upp;
	
	upp=str2upper(string_s);
    EXPECT_EQ(0,upp);
}


/*
	Converts all capital characters to lower case characters 
	in string. Function returns the number of changed characters
*/
TEST(MytestCategory,MyLowerTEst1)
{
     char string_s[]="Hello";
     char low;
	
	low=str2lower__(string_s);
    EXPECT_EQ(1,low);
}
TEST(MytestCategory,MyLowerTEst2)
{
     char string_s[]="F11Nish";
     char low;
	
	low=str2lower_(string_s);
    EXPECT_EQ(2,low);
}
TEST(MytestCategory,MyLowerTEst3)
{
     char string_s[]="wor!d!";
     char low;
	
	low=str2lower_(string_s);
    EXPECT_EQ(0,low);
}
TEST(MytestCategory,MyLowerTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char low;
	
	low=str2lower_(string_s);
    EXPECT_EQ(3,low);
}
TEST(MytestCategory,MyLowerTEst5)
{
     char string_s[]="";
     char low;
	
	low=str2lower_(string_s);
    EXPECT_EQ(0,low);
}


/*
	removes all occurrences of numbers, Function returns new 
	length of the string
*/
TEST(MytestCategory,MyDelnumTEst1)
{
     char string_s[]="Hello";
     char delnum;

	delnum=str_strip_numbers(string_s);
    EXPECT_EQ(5,delnum);
}
TEST(MytestCategory,MyDelnumTEst2)
{
     char string_s[]="F11Nish";
     char delnum;

	delnum=str_strip_numbers(string_s);
    EXPECT_EQ(5,delnum);
}
TEST(MytestCategory,MyDelnumTEst3)
{
     char string_s[]="wor!d!";
     char delnum;

	delnum=str_strip_numbers(string_s);
    EXPECT_EQ(6,delnum);
}
TEST(MytestCategory,MyDelnumTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char delnum;

	delnum=str_strip_numbers(string_s);
    EXPECT_EQ(25,delnum);
}
TEST(MytestCategory,MyDelnumTEst5)
{
     char string_s[]="";
     char delnum;

	delnum=str_strip_numbers(string_s);
    EXPECT_EQ(0,delnum);
}

/*Function that will copy the content of string s to string d*/
TEST(MytestCategory,MyCpyTEst1)
{
     char string_s[]="Hello";
     char string_d[]="";

	mystrcpy(string_s, string_d);
    EXPECT_STREQ("Hello",string_d);
}
TEST(MytestCategory,MyCpyTEst2)
{
     char string_s[]="F11Nish";
     char string_d[]="";

	mystrcpy(string_s, string_d);
    EXPECT_STREQ("F11Nish",string_d);
}
TEST(MytestCategory,MyCpyTEst3)
{
     char string_s[]="wor!d!";
     char string_d[]="";

	mystrcpy(string_s, string_d);
    EXPECT_STREQ("wor!d!",string_d);
}
TEST(MytestCategory,MyCpyTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char string_d[]="";

	mystrcpy(string_s, string_d);
    EXPECT_STREQ("EmbeddedSystemProgramming",string_d);
}
TEST(MytestCategory,MyCpyTEst5)
{
     char string_s[]="";
     char string_d[]="";

	mystrcpy(string_s, string_d);
    EXPECT_STREQ("",string_d);
}


/*
	Function that will compare two strings together. Function returns 
	place (n) of first different character 
        -n if s is ordered before in alphabet that d
        0 if strings are equal
        +n if d is ordered before s
*/
TEST(MytestCategory,MyCmpTEst1)
{
     char string_s[]="Hello";
     char string_d[]="Hello";
     int cmp; 

	cmp=mystrcmp(string_s, string_d);
    EXPECT_EQ(0,cmp);
}
TEST(MytestCategory,MyCmpTEst2)
{
     char string_s[]="F11Nish";
     char string_d[]="Course";
     int cmp;

	cmp=mystrcmp(string_s, string_d);
    EXPECT_EQ(1,cmp);
}
TEST(MytestCategory,MyCmpTEst3)
{
     char string_s[]="wor!d!";
     char string_d[]="Good";
     int cmp;

	cmp=mystrcmp(string_s, string_d);
    EXPECT_EQ(1,cmp);
}
TEST(MytestCategory,MyCmpTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";
     char string_d[]="EmbeddedSystem_Programming";
     int cmp;
	
	cmp=mystrcmp(string_s,string_d);
    EXPECT_EQ(-15,cmp);
}
TEST(MytestCategory,MyCmpTEst5)
{
     char string_s[]="";
     char string_d[]="1";
     int cmp;
	
	cmp=mystrcmp(string_s,string_d);
    EXPECT_EQ(-1,cmp);
}

/*Creates a duplicate of a string s and returns a pointer to newly created string*/
TEST(MytestCategory,MyDuplTEst1)
{
     char string_s[]="F11Nish";

    EXPECT_STREQ("F11Nish",strdupl(string_s));
}
TEST(MytestCategory,MyDuplTEst2)
{
     char string_s[]="wor!d!";

    EXPECT_STREQ("wor!d!",strdupl(string_s));
}
TEST(MytestCategory,MyDuplTEst3)
{
     char string_s[]="Hello";

    EXPECT_STREQ("Hello",strdupl(string_s));
}
TEST(MytestCategory,MyDuplTEst4)
{
     char string_s[]="EmbeddedSystemProgramming";

    EXPECT_STREQ("EmbeddedSystemProgramming",strdupl(string_s));
}
TEST(MytestCategory,MyDuplTEst5)
{
     char string_s[]="";

    EXPECT_STREQ("",strdupl(string_s));
}


