# C_language By: Sushant khadka

 Facebook : Sushant khadka 
 
# DATA TYPES IN C-----
    Int -->
    Float -->
    Char -->
    Long double -->
    String -->
    Pointer -->
    Struct -->
    Signedness -->
    Array data structure -->
    Floating-point arithmatic -->
    Boolen data type -->
    Double-presing floating pooint -->
    Void type -->
    Wide character -->
    Short Int -->
    Enumerated type -->
    Union type -->

## OSI --> Open system Interconnection (1976)
    All people seems to need data processing(APSTNDP) --> all layer of network

# FILE HANDLING START

    1. FILE --> helps to create the FILE
    2. *name_of_variable --> creating the variable to open the FILE
    3. fopen() --> helps to open the FILE
        syntax= fopen("name of FILE","mode of open")

    ------------writing into the file----------
    4. fputc() --> put the character in the FILE
        syntax = fputc(name[counter],variable)
    5. fputs --> helps to write the whole string at a time in the FILE and only take the data from gets() function
        syntax = fputs(variable,file_Pointer)
        variable = store the value of the file with method of opening
    6. fprintf() --> helps to put the value in the file with different data types at the same time and write the data in the formatted way
        syntax = fprints(file_Pointer,"value",variable)
        value = "%s"
        variable =name[] -- this means the variable where the string is stored

    -------------reading from the file----------
    8. fgetc() --> read the character from the file
        syntax =fgets(file_Pointer)
    9. fgets() --> gets the string from the file
        syntax = fgets(variable_to_store,length,file_Pointer)
    10. fscanf() --> read the data from the file only the first open(only read the first word from the file)[word or character]
        syntax = fscanf(file_Pointer,value,variable to store the data)

    -------------store the long user input value------------------
    7. gets() --> helps to store the long value with space also
        syntax = gets(variable)

    ------------checking the last character from the file-------------
    11. feof --> check the end of the file
        syntax = feof(file_Pointer)
    12. Renaming the filen
        syntax = rename("old name","new_name");
        value return = 0
    13. Removing the file
        syntax = remove("'file_name")
        value return = 0

# STRING FUNCTION

    1. strcpy() --> helps to copy the string one from another
        syntax = strcpy(target,source)
        target = kasma copy garne
        source = ko bata copy garne
    2. strcat() --> used to add the two string(concating the string)
        syntax = strcat(target,source)
    3. strlen() --> helps to find the length of the word or string
        strlen(word)


# WORKING WITH STRUCT
    1. basic syntax to create struct = sturct student
        {
            char Name[20];
            char Education_institution_name[50];
            char Degree[30];
            int Age;
        };

    2. struct Pointer
        syntax =struct student name_here //------simple struct----
        {
            char Name[20]; (value)
            char Education_institution_name[50];(related value)
            char Degree[30];(related_value)
            int Age;(related_value)
        };
        syntax =struct student *pointer_name_here;

        assigning the value of name_here into the *pointer_name_here-----
        pointer_name_here = &name_here
            -----Both are same-----
        (*pointer_name_here).Age = 30;
        pointer_name_here ->.Age = 30;



![notes](https://user-images.githubusercontent.com/87481819/154859852-d77f8033-8c94-493b-92c2-a5eb1a399cf4.png)
