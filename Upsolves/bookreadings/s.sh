for((i = 1; i<=100; ++i)); do
    ./gen > test.in
    ./bookreading < test.in > test1.out
    ./brute < test.in > test2.out
    diff -w test1.out test2.out || break
	
done 
