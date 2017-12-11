class Y1006_2{
	public static void main(String[] args){
		System.out.println(transform(23));
	}

	public static String transform(int input){
		if(input > 999){
			return "";
		}
		StringBuilder sb = new StringBuilder();
		if(input > 99){
			int temp = input / 100;
			for(int i = 0; i < temp; i++){
				sb.append("B");
			}
			input -= (temp * 100);
		}
		if(input > 9){
			int temp = input / 10;
			for(int i = 0; i < temp; i++){
				sb.append("S");
			}
			input -= (temp * 10);
		}
		for(int i = 1; i <= input; i++){
				sb.append(i);
		}
		return sb.toString();
	}
}