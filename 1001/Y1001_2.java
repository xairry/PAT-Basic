public class Y1001_2{
	
	public static void main(String[] args){
		System.out.println(Callatz(10));
	}
	
	private static int Callatz(int num){
		int count = 0;
		while(num != 1){
			if(num % 2 == 0){
				num = num >> 1;
			}else{
				num = (num * 3 + 1) >> 1;
			}
			count ++;
		}
		
		return count;
	}
}