import java.util.ArrayList;
import java.util.List;
public class Y1004_2{
	public static void main(String[] args){
		List<String> list = new ArrayList<String>();
		list.add("Joe Math990112 89");
		list.add("Mike CS991301 100");
		list.add("Mary EE990830 95");
		System.out.println(compare(list));
	}

	public static String compare(List<String> list){
		int max = 0;
		String maxStr = "";
		int min = 101;
		String minStr = "";
		for(String str : list){
			String[] infoStr = str.split(" ");
			int num = Integer.parseInt(infoStr[2]);
			if(num > max){
				maxStr = infoStr[0] + " " + infoStr[1];
				max = num;
			}
			if(num < min){
				minStr = infoStr[0] + " " + infoStr[1];
				min = num;
			}
		}
		return maxStr + "\n" + minStr;
	}
}