public class Y1002_2{
	public static void main(String[] args){
		System.out.println(read("1234567890987654321123456789"));
	}

	public static String read(String num){
		String[] readStr = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
		int count = 0;
		char[] numStr = num.toCharArray();
		for(char c : numStr){
			count += Character.getNumericValue(c);
		}

		StringBuffer sb = new StringBuffer("");
		while(true){
			int i = count % 10;
			sb.insert(0, " ");
			sb.insert(0, readStr[i]);
			if(count < 10){
				break;
			}
			count /= 10;
		}
		return sb.toString();
	}
}