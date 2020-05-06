class Solution {
public:
    
    int pow(int a,int b)
    {
        int res=1;
        while(b)
        {
            res=res*a;
            --b;
        }
        return res;
    }
    
    int findComplement(int n) {
        int bin[32]={0};
        int i=0;
        while(n)
        {
            bin[i]=n%2;
            n=n/2;
            ++i;
        }
        for(int j=i-1;j>=0;--j)
        {
            if(bin[j]==0)
                bin[j]=1;
            else if(bin[j]==1)
                bin[j]=0;
        }
        int tot=0;
        for(int j=0;j<i-1;++j)
        {
            tot+=bin[j]*pow(2,j);
        }
        return tot;
    }
};
