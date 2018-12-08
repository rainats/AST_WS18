package Project;

import java.util.ArrayList;
//import java.util.Arrays;

public class ProjectPart02 {   
	
	public ArrayList<Objects> ppart02(Objects[] array1,Objects[] array2){
		
		comparator a = new comparator();
    	ArrayList<Objects> result_array = new ArrayList<Objects>();	
    	result_array = a.Compare(array1,array2); 
        return result_array;
	}
  
    
	public static void main(String[] args){
	
		int count = 5;
        
        Objects[] array1 = new Objects[count];
        Objects[] array2 = new Objects[count];
        ArrayList<Objects> result_array = new ArrayList<Objects>();	
        
        array1[0] = new Objects("knife",1,"94%") ;
        array1[1] = new Objects("scissor", 2, "69%") ;
        array1[2] = new Objects("spoon", 3, "33%") ;
        array1[3] = new Objects("spoon", 4, "80%") ;
        array1[4] = new Objects("keys", 5, "95%") ;
        
        array2[0] = new Objects("keys",5,"95%") ;
        array2[1] = new Objects("spoon", 4, "99%") ;
        array2[2] = new Objects("fork", 3, "99%") ;
        array2[3] = new Objects("scissor", 2, "95%") ;
        array2[4] = new Objects("knife",1,"55%") ; 
        
        ProjectPart02 p2 =new ProjectPart02();
        result_array = p2.ppart02(array1,array2);
        Objects[] result = result_array.toArray(new Objects[result_array.size()]); 
//        Arrays.sort(result, Objects::compareNum);
        
        
        for (int i=0 ; i<result.length; i++)
        {
            System.out.println(result[i].getObjectName() + " " + result[i].getObjectNumber() + " " + result[i].getObjectPercentage());
        }
        
    }
        
        
}

