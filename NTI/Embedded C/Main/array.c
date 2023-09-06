int arrayMaxNum(int*array,int size)
{
    int max=array[0];

    for(int i=1; i<size; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}


int arrayAvg(int*array,int size)
{
    int sum=0;

    for(int i=0; i<size; i++)
    {
        sum=sum+array[i];
    }
    return sum/size;
}

void arrayBubbleSort(int*array,int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[j]<array[i])
            {
                swapNum(&array[i],&array[j]);
            }
        }
    }
}

void arrayPrint(int*array,int size)
{
    for(int counter=0; counter<size; counter++)
    {
        printf("arr[%d]=%d\n",counter,array[counter]);
    }
}

