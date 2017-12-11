class Y1007_2{
	public static void main(String[] args){
		System.out.println(primeNumber(20));
	}

	public static int primeNumber(int num){
		int count = 0;
		for(int i = 3; i < num - 1; i += 2){
			if(isPrime(i) && isPrime(i + 2)){
				count ++;
			}
		}
		return count;
	}

	public static boolean isPrime(int n)
	{
		if(n < 2) return false;
		if(n == 2) return true;
		if(n % 2 == 0) return false;
		for(int i = 3; i * i <= n; i += 2)
			if(n % i == 0) return false;
		return true;
	}
}