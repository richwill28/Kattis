package heimavinna;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int counter = 0;
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] ranges = s.split(";");
        for (String range : ranges) {
            if (range.indexOf("-") == -1) {
                counter++;
            } else {
                String[] nums = range.split("-");
                int left = Integer.parseInt(nums[0]);
                int right = Integer.parseInt(nums[1]);
                counter += right - left + 1;
            }
        }
        System.out.println(counter);
    }
}
