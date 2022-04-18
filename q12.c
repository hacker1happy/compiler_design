// Set of all strings over {0, 1} having odd number of 0‟s and 1‟s.
#include <stdio.h>
int EE=0, OE=1, OO=2, EO=3; // DFA states
int state = 0; // initial DFA state
char input;
int main(void) {
   printf("Enter a string of 0s and 1s: ");
   while (1) {
      scanf("%c", &input);
      if (input == '\n') // if end-of-line exit loop
         break;
      if ( (input != '0') && (input != '1') ) { // invalid input printf("Invalid input: program terminating\n");
         break;
      }
      if (state==0) {
         // input is either '0' or '1' state = (input == '0') ? OE : EO;
      }
      else if(state==1) {
         state = (input == '0') ? EE : OO;
      }
      else if (state==2) {
         state = (input == '0') ? EO : OE;
      } else {
         state = (input == '0') ? OO : EE;
      }
   };
   if (input == '\n') {
      if (state == OO)
         printf("Input accepted\n");
      else
         printf("Input rejected\n");
   }
   return 0;
}