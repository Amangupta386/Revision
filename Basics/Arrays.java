public class arraysQ {
    // public static void main(String args[]) {
    //     int marks[] = new int[100];
    //     Scanner sc = new Scanner(System.in);
    // //     marks[0] = sc.nextInt();
    // //     marks[1] = sc.nextInt();
    // //     marks[2] = sc.nextInt();
    // //    int percentage = (marks[0] + marks[1] + marks[2])/3;
    // //    System.err.println("Percentage is " + percentage + "% " );
    // System.out.println(" length of array "+ marks.length);
    // }
    // 
    // public static int linearSearch(int numbers[], int key) {
    //     for(int i=0; i<numbers.length; i++ ){
    //         if(numbers[i] == key) {
    //             return i;
    //         }
            
    //     }
    //     return-1;
    // }
    // public static void main(String args[]) {
    //     int numbers[] = {2,4,6,8,10,12,14,18};
    //     int key = 22;
    //     int index = linearSearch(numbers, key);
    //     if(index==-1) {
    //         System.out.println("Not Found");
    //     }
    //     else{
    //         System.out.println("Key is at index " + index);
    //     }
    // }
    public static String dishSearch(String menu[] ,String dish ) {
        for(int i=0; i<menu.length; i++) {
            if(menu[i] == dish) {
                return "1";
            }
        }
        return "-1";

    }
    public static void main (String args[]) {
        String menu[] = {"Dosa" , "Chole Bhature" , "Chowmein", "Pizza", "Burger"};
        String dish = "Samosa";
        String index = dishSearch(menu, dish);
        if(index=="-1") {
            System.out.println("Not Found");

        }else {
            System.out.println( index);
        }
    }
    
}
