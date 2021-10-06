import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class C977 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        // int[] arr = new int[n + 5];
        Integer tmp;
        int p;
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for (int i = 0; i < n; i++) {
            p = scanner.nextInt();
            tmp = mp.get(p);
            mp.put(p, tmp == null ? 1 : tmp + 1);
        }
        // Arrays.sort(arr);
        int cnt = 0, f = 0;
        List<Integer> list = new ArrayList<Integer>();
        for (var xx : mp.keySet()) {
            list.add(xx);
        }
        Collections.sort(list);
        for (var v : list) {
            cnt += mp.get(v);
            if (cnt == k) {
                f = 1;
                System.out.println(v);
                break;
            } else if (cnt > k)
                break;
        }
        // for (var entry : mp.entrySet()) {
        //     cnt += entry.getValue();
        //     if (cnt == k) {
        //         f = 1;
        // System.out.println(entry.getKey());
        // break;
        // } else if (cnt > k)
        // break;
        // }
        // for (int i = 0; i < n; i++) {
        // System.out.println(arr[i]);
        // tmp = mp.get(arr[i]);
        // if (tmp == null)
        // tmp = 0;
        // cnt += tmp;
        // if (cnt == k) {
        // f = 1;
        // System.out.println(arr[i]);
        // break;
        // } else if (cnt > k)
        // break;
        // }
        if (k == 0 && list.get(0) != 1) {
            System.out.println("1");
        } else if (f == 0) {
            System.out.println("-1");
        }
        scanner.close();
    }
}