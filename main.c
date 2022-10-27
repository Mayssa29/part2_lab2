/**
  ******************************************************************************
  * @file    main.c
  * @author  Mayssa Abidi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
//#define SOM
#define MUL
//#define INTEL
#define OTHERS
//#define MIN
#define MAX


/* Private function prototypes -----------------------------------------------*/
static int sum(int var1, int var2);
static int mul(int var1, int var2);
static int max(int var1, int var2);
static int min(int var1, int var2);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef SOM

  int SumResult = sum(1,2);

#endif 
#ifdef MUL
  int MulResult = mul(1,2);
#endif
  
#ifdef MAX
  int MaxVal = max(10,12);
#endif
#ifdef MIN
  int MinVal = min(10,12);
#endif
  
  while (1)
  {
   
  }
}
#ifdef INTEL

#ifdef SOM
static int sum(int var1, int var2)
{
  return(var1+var2);
}
#endif
#ifdef MIN
static int min(int var1, int var2)
{
  return var1 <= var2 ? var1 : var2;
}
#endif

#endif
#ifdef OTHERS
#ifdef MUL
static int mul(int var1, int var2)
{
  return(var1*var2);
}
#endif
#ifdef MAX
static int max(int var1, int var2)
{
  return var1 >= var2 ? var1 : var2;
}
#endif
#endif

/**************************************END OF FILE**************************************/
