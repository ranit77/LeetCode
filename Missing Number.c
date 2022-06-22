int missingNumber(int* nums, int numsSize){
int i,j,l,p,z;
for(i=0;i<numsSize;i++)
{
    p=i;
    l=0;
    for(j=0;j<numsSize;j++)
    {
        if(p==nums[j])
        {
          l=1;    
        }
    }
    if(l==0)
    {
        z=i;
        break;
    }
}
return z;
}