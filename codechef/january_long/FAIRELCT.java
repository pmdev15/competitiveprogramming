package codechef;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class FAIRELCT {
	public static void main(String[] args) throws java.lang.Exception {

		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			for (int k = 0; k < T; k++) {
				int N = sc.nextInt();
				int M = sc.nextInt();
				int[] A = new int[N];
				int[] B = new int[M];
				int SumA = 0;
				int SumB = 0;

				for (int i = 0; i < N; i++) {
					A[i] += sc.nextInt();
					SumA += A[i];
				}
				for (int i = 0; i < M; i++) {
					B[i] += sc.nextInt();
					SumB += B[i];
				}
				if (SumA > SumB) {
					System.out.println(0);
				} else {
					int count = 0;
					Arrays.sort(A);
					Arrays.sort(B);
					int j = M - 1;
					for (int i = 0; i < N; i++) {
						SumA = SumA - A[i];
						SumB = SumB - B[j];
						SumA = SumA + B[j];
						SumB = SumB + A[i];
						count++;
						j--;
						if (SumA > SumB || j < 0) {
							break;
						}
					}
					if (SumA > SumB) {
						System.out.println(count);
					} else {
						System.out.println(-1);
					}
				}

			}
		} catch (

		Exception e) {
			return;
		}

	}
}
