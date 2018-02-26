import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
class Y1008_2{
	public static void main(String[] args){
		List<Integer> nums = new LinkedList<Integer>();
		nums.add(1);
		nums.add(2);
		nums.add(3);
		nums.add(4);
		nums.add(5);
		nums.add(6);
		trans(6, 2, nums);
	}

	public static void trans(int num, int move, List<Integer> list){
		
		int moveNum = move % num;
		for(int i = 0; i < moveNum; i++){
			list.add(0, list.remove(list.size() - 1));
		}
		for(Iterator<Integer> iter = list.iterator(); iter.hasNext();){
			System.out.println(iter.next());
		}
	}
}