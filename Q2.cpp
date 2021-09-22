#include <stdio.h>
#include <string.h>
int isChar(char c)
{
    if(((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z')))
    return 1;
    else
    return 0;
}
  

int isDigit(const char c)
{
    if((c >= '0' && c <= '9'))
    return 1;
    else
    return 0;
}
  
// Function to check email id is
// valid or not
int is_valid(char email[])
{
    // Check the first character
    // is an alphabet or not
    if (!isChar(email[0])) {
  
        // If it's not an alphabet
        // email id is not valid
        return 0;
    }
    // Variable to store position
    // of At and Dot
    int At = -1, Dot = -1;
  
    // Traverse over the email id
    // string to find position of
    // Dot and At
    for (int i = 0;
         i < strlen(email); i++) {
  
        // If the character is '@'
        if (email[i] == '@') {
  
            At = i;
        }
  
        // If character is '.'
        else if (email[i] == '.') {
  
            Dot = i;
        }
    }
  
    // If At or Dot is not present
    if (At == -1 || Dot == -1)
        return 0;
  
    // If Dot is present before At
    if (At > Dot)
        return 0;
  
    // If Dot is present at the end
    if((Dot >= (strlen(email) - 1)))
    return 0;

    return 1;
}
  
// Driver Code
int main()
{
    // Given string email
   char email[10000];
   printf("enter a email address");
   scanf("%s", email);
  if( is_valid(email))
  printf("valid email address");
  else
  printf("invalid email address");
  
    // Function Call
    
  
    return 0;
}