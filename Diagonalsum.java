class Diagonalsum
{
  public static void main(String args[])
  {
    int a[][]={{1,2},{1,2}};
    int sum=0,i,j;
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        if(i==j)
        {
          sum=sum+a[i][j];
        }
      }
    }
    System.out.println("THE SUM OF DIAGONAL OF A MATRIX IS : "+sum);
  }
}
