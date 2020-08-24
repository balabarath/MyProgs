#include<stdio.h>
#include<math.h>

int isPrime(long num){
    long sqrtval = (long) floor(sqrt((double)num));
    if(num%2 == 0 )
        return 0;
    for(long i = 3; i <= sqrtval; i+=2){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long rtprimes[100] = {2,3,5,7};
    int uds[] = {1,3,7,9};  
    int pc = 4;
    int pi = 0;
    int npi = 4;
    while(pi < pc){
        for(int i = pi; i < pc; i++){
            for(int j = 0; j < 4; j++){
                long num = rtprimes[i]*10+uds[j];
                if(isPrime(num)){
                    rtprimes[npi] = num;
                    npi++;
                }
            }
        }
        pi = pc;
        pc = npi;
    }
    for(int i=0;i<npi;i++){
        printf("%d) %ld\n",i+1,rtprimes[i]);
    }
    return  0;
}
