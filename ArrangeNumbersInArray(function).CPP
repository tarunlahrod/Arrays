/*

Sample Input 1 :
6

Sample Output 1 :
 1 3 5 6 4 2

 
Sample Input 2 :
9

Sample Output 2 :
 1 3 5 7 9 8 6 4 2

 */



void arrange(int arr[],int n)
{
 
 int i,val=1,j=n-1;
  for(i=0;i<j;)
  {
    arr[i]=val;//printing odd no.s
    val++;
    arr[j]=val;//printing even no.s
    val++;
    i++;
    j--;
  }
  if(i==j)
  {
    arr[i]=val;
  }
   
}
