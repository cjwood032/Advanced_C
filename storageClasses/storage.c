/*
Challenge, define the following (name will be CH+number)
1.  int variable with block scope and temporary storage
2.  global double that is only accessible in this file
3.  global float that is accessible within the entire program
4.  local float with permanent storage
5.  register int
6.  a function that is only accessible within the file.
*/
static double CH2;
extern float CH3;
int main()
{
    int CH1;
    static float CH4;
    register int CH5;
}
static void CH6()
{
    //I'm local
}