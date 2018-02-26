import java.util.Arrays;
import java.util.Collections;
import java.util.List;
class Y1009_2{
	public static void main(String[] args){
		trans("Hello World Here I Come");
	}

	public static void trans(String str){
		String[] strs = str.split(" ");
		List<String> list = Arrays.asList(strs);
		Collections.reverse(list);
		for(String s : list){
			System.out.print(s + " ");
		}
	}
}