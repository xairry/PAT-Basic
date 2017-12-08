import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
public class Y1005_2{
	
	public static void main(String[] args){
		List<Integer> inputList = new ArrayList<Integer>();
		inputList.add(3);
		inputList.add(5);
		inputList.add(6);
		inputList.add(7);
		inputList.add(8);
		inputList.add(11);
		Callatz(inputList);
	}
	
	private static void Callatz(List<Integer> inputList){
		List<Integer> allList = new ArrayList<Integer>();
		List<Integer> resultList = new LinkedList<Integer>();
		for(int num : inputList){
			while(num != 1){
				if(allList.contains(num)){
					resultList.remove((Integer)num);
				}else{
					resultList.add(num);
					allList.add(num);
				}
				if(num % 2 == 0){
					num = num >> 1;
				}else{
					num = (num * 3 + 1) >> 1;
				}
				
			}
		}

		for(int i : resultList){
			System.out.print(i + " ");
		}
	}

}