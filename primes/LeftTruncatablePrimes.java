import java.math.BigInteger;

class LeftTruncatablePrimes{
    
    private static BigInteger newtonIteration(BigInteger n, BigInteger x0){
        final BigInteger x1 = n.divide(x0).add(x0).shiftRight(1);
        return x0.equals(x1)||x0.equals(x1.subtract(BigInteger.ONE)) ? x0 : newtonIteration(n, x1);
    }
    
    public static BigInteger sqrt(final BigInteger number){
        if(number.signum() == -1)
            throw new ArithmeticException("We can only calculate the square root of positive numbers.");
        return newtonIteration(number, BigInteger.ONE);
    }
    
    static boolean isPrime(BigInteger num){
        if(num.isProbablePrime(1)){
            BigInteger sqrtval = sqrt(num);
            if(num.mod(new BigInteger("2")) == BigInteger.ZERO )
                return false;
            for(BigInteger i = new BigInteger("3"); i.compareTo(sqrtval) < 1 ; i = i.add(new BigInteger("2"))){
                if(num.mod(i) == BigInteger.ZERO){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    
    public static void main(String[] args){
        BigInteger ltprimes[] = new BigInteger[5000];
        ltprimes[0] = new BigInteger("2");
        ltprimes[1] = new BigInteger("3");
        ltprimes[2] = new BigInteger("5");
        ltprimes[3] = new BigInteger("7");
        int pc = 4;
        int pi = 1;
        int npi = 4;
        while(pi < pc){
            for(int j = 1; j < 10; j++){
                for(int i = pi; i < pc; i++){
                    BigInteger num = new BigInteger(""+j+ltprimes[i]);
                    if(isPrime(num)){
                        ltprimes[npi] = num;
                        npi++;
                    }
                }
            }
            pi = pc;
            pc = npi;
        }
        for(int i=0;i<npi;i++){
            System.out.println(""+(i+1)+" "+ltprimes[i]);
        }
    }
    
}
