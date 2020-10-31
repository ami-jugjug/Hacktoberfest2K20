class search

{
    //Program to search an element in an array

    public static void main(String[ ]args)
    {
        int a[]  = new int [] {1, 2, 3, 4, 5};
        int i;
        for(i=0;i<5;i++)
        {
          if(a[i]==2)
          {
            System.out.println("THE POSITION OF THE ELEMENT IS : "+ (i+1));
          }
        }
    }
}
