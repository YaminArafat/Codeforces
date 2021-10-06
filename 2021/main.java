//1490C
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class main {
    public static long[] arr;
    public static Map<Long, Boolean> mp;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        arr = new long[10005];
        mp = new HashMap<Long, Boolean>();
        // arr[0] = 1L;
        // System.out.println(arr[0]);
        for (int i = 1; i <= 10000; i++) {
            arr[i] = i * 1L * i * 1L * i * 1L;
            mp.put(arr[i], true);
            // System.out.println(arr[i]);
        }
        int t = scanner.nextInt();
        long x, a;
        int p;
        while (t > 0) {
            x = scanner.nextLong();
            // p = bSrch(x);
            // a = arr[p];
            // System.out.println(x - a);
            boolean f = false;
            for (int i = 1; i <= 10000; i++) {
                if (mp.containsKey(x - arr[i])) {
                    System.out.println("YES");
                    f = true;
                    break;
                }
            }
            if (!f) {
                System.out.println("NO");
            }
            t--;
        }
        scanner.close();
    }

    // public static int bSrch(long xx) {
    // int low = 1, high = 10000, mid, val;
    // mid = (low + high) / 2;
    // val = mid;
    // // System.out.println(arr[2500]);
    // while (low <= high) {
    // if (arr[mid] == xx) {
    // return mid;
    // } else if (arr[mid] < xx) {
    // // System.out.println(mid + " " + arr[mid]);
    // val = mid;
    // low = mid + 1;
    // } else {
    // high = mid - 1;
    // }
    // mid = (low + high) / 2;
    // // System.out.println(low + " " + mid + " " + high);
    // }
    // return val;
    // }
}