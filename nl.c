// hello.spl
// compiled with splc.py (c) Sam Donow 2013-2015
#include <stdio.h>
#include <math.h>
#include "include/mathhelpers.h"
int condition = 0;
char inputbuffer[BUFSIZ];
int main() {

int Romeo = -1;
int Hamlet = 1;
int Juliet = 32;
int Tybalt = 8;
int Ophelia = 0;
act1: {
goto act_1_scene1;
}
act_1_scene1: {
;
Tybalt = (Tybalt + 2) ;

goto act_1_scene2;

}
act_1_scene2: {
;
Hamlet = getchar();
condition = (Hamlet) == (Romeo);
if (condition) {
 goto act5;
 }

goto act_1_scene3;

}
act_1_scene3: {
;
Ophelia = (Ophelia + 1) ;
fprintf(stdout, "%d", Ophelia);
fprintf(stdout, "%c", (char)Juliet);

goto act2;

}
act2: {
goto act_2_scene1;
}
act_2_scene1: {
;
condition = (Hamlet) == (Romeo);
if (condition) {
 goto act5;
 }

goto act_2_scene2;

}
act_2_scene2: {
;
fprintf(stdout, "%c", (char)Hamlet);
condition = (Hamlet) == (Tybalt);
if (!condition) {
 goto act4;
 }

goto act3;

}
act3: {
goto act_3_scene1;
}
act_3_scene1: {
;
Hamlet = getchar();
condition = (Hamlet) == (Romeo);
if (condition) {
 goto act5;
 }

goto act_3_scene2;

}
act_3_scene2: {
;
Ophelia = (Ophelia + 1) ;
fprintf(stdout, "%d", Ophelia);
fprintf(stdout, "%c", (char)Juliet);
goto act2;

goto act4;

}
act4: {
goto act_4_scene1;
}
act_4_scene1: {
;
Hamlet = getchar();
goto act2;

goto act5;

}
act5: {
goto act_5_scene1;
}
act_5_scene1: {
;

}
}
