# Fillit

Usage: run make command and then run fillit using the following command : ./fillit INPUT_FILE

A valid input file looks like this: https://github.com/oanamateiflorin/Fillit/blob/master/test

# TRACE:

# = Host-specific information ====================================================
$> hostname; uname -msr
e3r2p18.42.fr
Darwin 16.7.0 x86_64
$> date
Wed Jan 31 17:31:05 CET 2018
$> gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.38)
Target: x86_64-apple-darwin16.7.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
$> clang --version
Apple LLVM version 9.0.0 (clang-900.0.38)
Target: x86_64-apple-darwin16.7.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: intra/2018/activities/fillit/moana

= Git history ==================================================================
$> git -C /var/folders/yl/zdcksc1d31z2x44s740c8fk40000gq/T/tmpQDkw_l/user log --pretty='%H - %an, %ad : %s'
d1502d6d54c149a41e32f4d8e6d27e0cbc9e4d41 - Matei OANA, Wed Jan 31 17:28:14 2018 +0200 : Doamne ajuta

= Collected files ==========================================
$> ls -lAR /var/folders/yl/zdcksc1d31z2x44s740c8fk40000gq/T/tmpQDkw_l/user
total 24
-rw-r--r--   1 deepthought  deepthought  1298 Jan 31 17:31 Makefile
-rw-r--r--   1 deepthought  deepthought  3843 Jan 31 17:31 __GIT_HISTORY
-rw-r--r--   1 deepthought  deepthought    14 Jan 31 17:31 auteur
drwxr-xr-x   3 deepthought  deepthought   102 Jan 31 17:31 includes
drwxr-xr-x  67 deepthought  deepthought  2278 Jan 31 17:31 libft
drwxr-xr-x   9 deepthought  deepthought   306 Jan 31 17:31 srcs

/var/folders/yl/zdcksc1d31z2x44s740c8fk40000gq/T/tmpQDkw_l/user/includes:
total 8
-rw-r--r--  1 deepthought  deepthought  1882 Jan 31 17:31 fillit.h

/var/folders/yl/zdcksc1d31z2x44s740c8fk40000gq/T/tmpQDkw_l/user/libft:
total 520
-rw-r--r--  1 deepthought  deepthought  1102 Jan 31 17:31 Makefile
-rw-r--r--  1 deepthought  deepthought  1406 Jan 31 17:31 ft_atoi.c
-rw-r--r--  1 deepthought  deepthought   973 Jan 31 17:31 ft_bzero.c
-rw-r--r--  1 deepthought  deepthought  1017 Jan 31 17:31 ft_div_mod.c
-rw-r--r--  1 deepthought  deepthought  1012 Jan 31 17:31 ft_isalnum.c
-rw-r--r--  1 deepthought  deepthought  1021 Jan 31 17:31 ft_isalpha.c
-rw-r--r--  1 deepthought  deepthought   990 Jan 31 17:31 ft_isascii.c
-rw-r--r--  1 deepthought  deepthought   992 Jan 31 17:31 ft_isdigit.c
-rw-r--r--  1 deepthought  deepthought   991 Jan 31 17:31 ft_isprint.c
-rw-r--r--  1 deepthought  deepthought  1328 Jan 31 17:31 ft_itoa.c
-rw-r--r--  1 deepthought  deepthought   993 Jan 31 17:31 ft_lstadd.c
-rw-r--r--  1 deepthought  deepthought  1059 Jan 31 17:31 ft_lstdel.c
-rw-r--r--  1 deepthought  deepthought  1054 Jan 31 17:31 ft_lstdelone.c
-rw-r--r--  1 deepthought  deepthought  1045 Jan 31 17:31 ft_lstiter.c
-rw-r--r--  1 deepthought  deepthought  1219 Jan 31 17:31 ft_lstmap.c
-rw-r--r--  1 deepthought  deepthought  1330 Jan 31 17:31 ft_lstnew.c
-rw-r--r--  1 deepthought  deepthought  1051 Jan 31 17:31 ft_memalloc.c
-rw-r--r--  1 deepthought  deepthought  1222 Jan 31 17:31 ft_memccpy.c
-rw-r--r--  1 deepthought  deepthought  1133 Jan 31 17:31 ft_memchr.c
-rw-r--r--  1 deepthought  deepthought  1227 Jan 31 17:31 ft_memcmp.c
-rw-r--r--  1 deepthought  deepthought  1142 Jan 31 17:31 ft_memcpy.c
-rw-r--r--  1 deepthought  deepthought   991 Jan 31 17:31 ft_memdel.c
-rw-r--r--  1 deepthought  deepthought  1155 Jan 31 17:31 ft_memmove.c
-rw-r--r--  1 deepthought  deepthought  1123 Jan 31 17:31 ft_memset.c
-rw-r--r--  1 deepthought  deepthought  1126 Jan 31 17:31 ft_printmatrice.c
-rw-r--r--  1 deepthought  deepthought   978 Jan 31 17:31 ft_putchar.c
-rw-r--r--  1 deepthought  deepthought   990 Jan 31 17:31 ft_putchar_fd.c
-rw-r--r--  1 deepthought  deepthought  1059 Jan 31 17:31 ft_putendl.c
-rw-r--r--  1 deepthought  deepthought  1006 Jan 31 17:31 ft_putendl_fd.c
-rw-r--r--  1 deepthought  deepthought  1151 Jan 31 17:31 ft_putnbr.c
-rw-r--r--  1 deepthought  deepthought  1204 Jan 31 17:31 ft_putnbr_fd.c
-rw-r--r--  1 deepthought  deepthought  1018 Jan 31 17:31 ft_putstr.c
-rw-r--r--  1 deepthought  deepthought  1006 Jan 31 17:31 ft_putstr_fd.c
-rw-r--r--  1 deepthought  deepthought  1118 Jan 31 17:31 ft_range.c
-rw-r--r--  1 deepthought  deepthought  1113 Jan 31 17:31 ft_strcat.c
-rw-r--r--  1 deepthought  deepthought  1056 Jan 31 17:31 ft_strchr.c
-rw-r--r--  1 deepthought  deepthought  1042 Jan 31 17:31 ft_strclr.c
-rw-r--r--  1 deepthought  deepthought  1099 Jan 31 17:31 ft_strcmp.c
-rw-r--r--  1 deepthought  deepthought  1068 Jan 31 17:31 ft_strcpy.c
-rw-r--r--  1 deepthought  deepthought   992 Jan 31 17:31 ft_strdel.c
-rw-r--r--  1 deepthought  deepthought  1090 Jan 31 17:31 ft_strdup.c
-rw-r--r--  1 deepthought  deepthought  1139 Jan 31 17:31 ft_strequ.c
-rw-r--r--  1 deepthought  deepthought  1049 Jan 31 17:31 ft_striter.c
-rw-r--r--  1 deepthought  deepthought  1067 Jan 31 17:31 ft_striteri.c
-rw-r--r--  1 deepthought  deepthought  1267 Jan 31 17:31 ft_strjoin.c
-rw-r--r--  1 deepthought  deepthought  1312 Jan 31 17:31 ft_strlcat.c
-rw-r--r--  1 deepthought  deepthought  1050 Jan 31 17:31 ft_strlen.c
-rw-r--r--  1 deepthought  deepthought  1237 Jan 31 17:31 ft_strmap.c
-rw-r--r--  1 deepthought  deepthought  1182 Jan 31 17:31 ft_strmapi.c
-rw-r--r--  1 deepthought  deepthought  1136 Jan 31 17:31 ft_strncat.c
-rw-r--r--  1 deepthought  deepthought  1201 Jan 31 17:31 ft_strncmp.c
-rw-r--r--  1 deepthought  deepthought  1122 Jan 31 17:31 ft_strncpy.c
-rw-r--r--  1 deepthought  deepthought  1147 Jan 31 17:31 ft_strnequ.c
-rw-r--r--  1 deepthought  deepthought  1083 Jan 31 17:31 ft_strnew.c
-rw-r--r--  1 deepthought  deepthought  1234 Jan 31 17:31 ft_strnstr.c
-rw-r--r--  1 deepthought  deepthought  1122 Jan 31 17:31 ft_strrchr.c
-rw-r--r--  1 deepthought  deepthought  1766 Jan 31 17:31 ft_strsplit.c
-rw-r--r--  1 deepthought  deepthought  1268 Jan 31 17:31 ft_strstr.c
-rw-r--r--  1 deepthought  deepthought  1251 Jan 31 17:31 ft_strsub.c
-rw-r--r--  1 deepthought  deepthought  1336 Jan 31 17:31 ft_strtrim.c
-rw-r--r--  1 deepthought  deepthought   997 Jan 31 17:31 ft_tolower.c
-rw-r--r--  1 deepthought  deepthought   997 Jan 31 17:31 ft_toupper.c
-rw-r--r--  1 deepthought  deepthought  1003 Jan 31 17:31 ft_ultimate_div_mod.c
-rw-r--r--  1 deepthought  deepthought  1152 Jan 31 17:31 ft_ultimate_range.c
-rw-r--r--  1 deepthought  deepthought  4009 Jan 31 17:31 libft.h

/var/folders/yl/zdcksc1d31z2x44s740c8fk40000gq/T/tmpQDkw_l/user/srcs:
total 72
-rw-r--r--  1 deepthought  deepthought  12288 Jan 31 17:31 .nfs.20051354.2c04
-rw-r--r--  1 deepthought  deepthought   2054 Jan 31 17:31 extra.c
-rw-r--r--  1 deepthought  deepthought   2228 Jan 31 17:31 extra1.c
-rw-r--r--  1 deepthought  deepthought   1345 Jan 31 17:31 extra2.c
-rw-r--r--  1 deepthought  deepthought   2149 Jan 31 17:31 fillit.c
-rw-r--r--  1 deepthought  deepthought   1467 Jan 31 17:31 main.c
-rw-r--r--  1 deepthought  deepthought   2082 Jan 31 17:31 verificare.c

= edge_tests ===================================================================
rm -f *.o
rm -f *.o
rm -f libft.a

cc -Wall -Wextra -Werror -I. -c *.c
ar rc libft.a *.o
ranlib libft.a

-rwxr-xr-x  1 deepthought  deepthought  14148 Jan 31 17:31 fillit

= Test 1 ===================================================
$> ./pi78i7vhu7d6ebdyayy1pc0t test1.prm
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./waexxdxdrehuudyhuuegaie3 test2.prm
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./4w16iz5g8lomj7yq6wi9imyp test3.prm
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./m37p6g7z5eezjvwbhn7htagh test4.prm
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./rf5i77w3m72b582290h9qocm test5.prm
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./faxbei39j6jm9oqp8sinby4o test6.prm
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./qi3h0lcwi31an687n6k2oc81 test7.prm
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./kfjuzvk927sbjmc2pqoagez2 test8.prm
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./7l39nv753grwjvig7yaapeq2 test9.prm
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./tnk9uy27dtyoy7kpjqw89m8f test10.prm
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./tymwu0iao8b0itq83zei5q13 test11.prm
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./2ryseovspnqtv9auizn59h9b test12.prm
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./igkgx83hofv35zwg67x450tp test13.prm
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./hketdqcje27rmtwfe5tnxg49 test14.prm
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./13rhismy8079wjapp1fbknfg test15.prm
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./ahrd0ppfmfz3dvdjs037jbn8 test16.prm
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./s0txm12wn0b7m4dp8xqtlgrs test17.prm
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./lvln90uibpinhsrg0geh9lpx test18.prm
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./ia01sm9kfd0won6tlw1ygber test19.prm
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./bvcau9hpwdy6up3cqq0t3u1a test20.prm
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
= Test 21 ==================================================
$> ./8b071z84ohrruwpws1a5l4o9 test21.prm
$> diff -U 3 user_output_test21 test21.output | cat -e

Diff OK :D
= Test 22 ==================================================
$> ./rat5mntxvho1u1zsdblmlazu test22.prm
$> diff -U 3 user_output_test22 test22.output | cat -e

Diff OK :D
= Test 23 ==================================================
$> ./idnvvabadbds5dywp0pbgdsb test23.prm
$> diff -U 3 user_output_test23 test23.output | cat -e

Diff OK :D
= Test 24 ==================================================
$> ./epq293l519dmxlgg04qv666y test24.prm
$> diff -U 3 user_output_test24 test24.output | cat -e

Diff OK :D
= Test 25 ==================================================
$> ./deeeg8xfv86zo5ewrhygjbzi test25.prm
$> diff -U 3 user_output_test25 test25.output | cat -e

Diff OK :D
= Test 26 ==================================================
$> ./injh6xv7cnkwyjdqlk4bncl8 test26.prm
$> diff -U 3 user_output_test26 test26.output | cat -e

Diff OK :D
= Test 27 ==================================================
$> ./7fd7k5ugj4loqie34t1q3fjb test27.prm
$> diff -U 3 user_output_test27 test27.output | cat -e

Diff OK :D
All tests OK
Grade: 1

= rand_tests ===================================================================
rm -f *.o
rm -f *.o
rm -f libft.a

cc -Wall -Wextra -Werror -I. -c *.c
ar rc libft.a *.o
ranlib libft.a

-rwxr-xr-x  1 deepthought  deepthought  14148 Jan 31 17:31 fillit

= Test 20 ==================================================
$> ./zigb0hrd3fi4iz75sa2f8uxv test20.prm
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
= Test 21 ==================================================
$> ./chptimq3d9sss4i5y6cndlva test21.prm
$> diff -U 3 user_output_test21 test21.output | cat -e

Diff OK :D
= Test 22 ==================================================
$> ./c7cxydt7ld3coyda4s2u1sba test22.prm
$> diff -U 3 user_output_test22 test22.output | cat -e

Diff OK :D
= Test 23 ==================================================
$> ./70ll7fffwd3g8w337vvc84es test23.prm
$> diff -U 3 user_output_test23 test23.output | cat -e

Diff OK :D
= Test 24 ==================================================
$> ./kcfqh22upq8dvqcune405ku2 test24.prm
$> diff -U 3 user_output_test24 test24.output | cat -e

Diff OK :D
= Test 25 ==================================================
$> ./engqgp2eww45kxkutda14bm9 test25.prm
$> diff -U 3 user_output_test25 test25.output | cat -e

Diff OK :D
= Test 26 ==================================================
$> ./1btslmkwz6s47en27pcdm246 test26.prm
$> diff -U 3 user_output_test26 test26.output | cat -e

Diff OK :D
= Test 27 ==================================================
$> ./d1gm8g7jllnfpca2ceka9q0e test27.prm
$> diff -U 3 user_output_test27 test27.output | cat -e

Diff OK :D
= Test 28 ==================================================
$> ./503i478rkrezsohsxf2q8gie test28.prm
$> diff -U 3 user_output_test28 test28.output | cat -e

Diff OK :D
= Test 29 ==================================================
$> ./it6rk5g5l332bq0wzb0zd0w1 test29.prm
$> diff -U 3 user_output_test29 test29.output | cat -e

Diff OK :D
= Test 30 ==================================================
$> ./go80v1l09vza4ihqvw4fbp24 test30.prm
$> diff -U 3 user_output_test30 test30.output | cat -e

Diff OK :D
= Test 31 ==================================================
$> ./dml7gcqz2cukzphvg8nmabw7 test31.prm
$> diff -U 3 user_output_test31 test31.output | cat -e

Diff OK :D
= Test 32 ==================================================
$> ./kjpd4kple3w1intrg5sbve16 test32.prm
$> diff -U 3 user_output_test32 test32.output | cat -e

Diff OK :D
= Test 33 ==================================================
$> ./m20j8mf4lu0znnzana67k8p6 test33.prm
$> diff -U 3 user_output_test33 test33.output | cat -e

Diff OK :D
= Test 34 ==================================================
$> ./uje44jjbkrkh06xdxr78v3ko test34.prm
$> diff -U 3 user_output_test34 test34.output | cat -e

Diff OK :D
= Test 35 ==================================================
$> ./4wh0s7hqpsj1954jelxu93e7 test35.prm
$> diff -U 3 user_output_test35 test35.output | cat -e

Diff OK :D
= Test 36 ==================================================
$> ./wm5sjz7wq5m71olt6znxu14f test36.prm
$> diff -U 3 user_output_test36 test36.output | cat -e

Diff OK :D
= Test 37 ==================================================
$> ./p3ixugrvmqdag0k1wq2brkwa test37.prm
$> diff -U 3 user_output_test37 test37.output | cat -e

Diff OK :D
= Test 38 ==================================================
$> ./7tgbxxw04g68s0e33bso7ry9 test38.prm
$> diff -U 3 user_output_test38 test38.output | cat -e

Diff OK :D
= Test 39 ==================================================
$> ./yfiua1pqwool3enak4m8zwez test39.prm
$> diff -U 3 user_output_test39 test39.output | cat -e

Diff OK :D
= Test 40 ==================================================
$> ./rtl7l1r6gvnpi93jexixdla4 test40.prm
$> diff -U 3 user_output_test40 test40.output | cat -e

Diff OK :D
= Test 41 ==================================================
$> ./b27r8khaz3miv1mkw3bog1le test41.prm
$> diff -U 3 user_output_test41 test41.output | cat -e

Diff OK :D
= Test 42 ==================================================
$> ./i7fgmzfi9n5xb37wcht79imh test42.prm
$> diff -U 3 user_output_test42 test42.output | cat -e

Diff OK :D
= Test 43 ==================================================
$> ./yeorpaiq285dlvyamb41ttrn test43.prm
$> diff -U 3 user_output_test43 test43.output | cat -e

Diff OK :D
= Test 44 ==================================================
$> ./ek0k9xmczljzj3101l9cqp60 test44.prm
$> diff -U 3 user_output_test44 test44.output | cat -e

Diff OK :D
= Test 45 ==================================================
$> ./mbcy1xd9c4vcg0fryc5546x1 test45.prm
$> diff -U 3 user_output_test45 test45.output | cat -e

Diff OK :D
= Test 46 ==================================================
$> ./z6q241yu36x3qt9dm5d5ft3u test46.prm
$> diff -U 3 user_output_test46 test46.output | cat -e

Diff OK :D
= Test 47 ==================================================
$> ./v5pe3l5pi9wvyb66ie08zdh9 test47.prm
$> diff -U 3 user_output_test47 test47.output | cat -e

Diff OK :D
= Test 48 ==================================================
$> ./3502923ysb08hgn4uq0q2pj9 test48.prm
$> diff -U 3 user_output_test48 test48.output | cat -e

Diff OK :D
= Test 49 ==================================================
$> ./6csuks5bqpere8rcrfe51sua test49.prm
$> diff -U 3 user_output_test49 test49.output | cat -e

Diff OK :D
= Test 50 ==================================================
$> ./win2ivois3bvn9mo4mlldk22 test50.prm
$> diff -U 3 user_output_test50 test50.output | cat -e

Diff OK :D
= Test 51 ==================================================
$> ./8e8kb0w4w6flhbyhrlcl9ami test51.prm
$> diff -U 3 user_output_test51 test51.output | cat -e

Diff OK :D
= Test 52 ==================================================
$> ./9j118je27mifk8xc77vwn7k8 test52.prm
$> diff -U 3 user_output_test52 test52.output | cat -e

Diff OK :D
= Test 53 ==================================================
$> ./3tdnz7mryy25s1ywk7hwfenb test53.prm
$> diff -U 3 user_output_test53 test53.output | cat -e

Diff OK :D
= Test 54 ==================================================
$> ./pnn0gt08cku57hqfbmrqls3b test54.prm
$> diff -U 3 user_output_test54 test54.output | cat -e

Diff OK :D
= Test 55 ==================================================
$> ./1lyximxbka123hoximxzevnk test55.prm
$> diff -U 3 user_output_test55 test55.output | cat -e

Diff OK :D
= Test 56 ==================================================
$> ./x97d7c95in6br2dsecqjsng8 test56.prm
$> diff -U 3 user_output_test56 test56.output | cat -e

Diff OK :D
= Test 57 ==================================================
$> ./4d5bl7ahqu4sppgocfn40zyg test57.prm
$> diff -U 3 user_output_test57 test57.output | cat -e

Diff OK :D
= Test 58 ==================================================
$> ./dmulyx37n1vh6sl016jt254m test58.prm
$> diff -U 3 user_output_test58 test58.output | cat -e

Diff OK :D
= Test 59 ==================================================
$> ./mndgd6z8wh3ekh27q20fyiyy test59.prm
$> diff -U 3 user_output_test59 test59.output | cat -e

Diff OK :D
= Test 60 ==================================================
$> ./xgacz5tueyba3lx6dwydx1c3 test60.prm
$> diff -U 3 user_output_test60 test60.output | cat -e

Diff OK :D
= Test 61 ==================================================
$> ./ezwmdb0b9ex4h6zt7trsmi96 test61.prm
$> diff -U 3 user_output_test61 test61.output | cat -e

Diff OK :D
= Test 62 ==================================================
$> ./tiingi8barld8na0noayiddl test62.prm
$> diff -U 3 user_output_test62 test62.output | cat -e

Diff OK :D
= Test 63 ==================================================
$> ./9mmv0casod8ihxzdi3p1e8xv test63.prm
$> diff -U 3 user_output_test63 test63.output | cat -e

Diff OK :D
= Test 64 ==================================================
$> ./ybn6wkyowmlojemcapxy34di test64.prm
$> diff -U 3 user_output_test64 test64.output | cat -e

Diff OK :D
= Test 65 ==================================================
$> ./m64vgwilxsgjl1b5m87e49fv test65.prm
$> diff -U 3 user_output_test65 test65.output | cat -e

Diff OK :D
= Test 66 ==================================================
$> ./nmisja4fjnsxn979jlbsgozy test66.prm
$> diff -U 3 user_output_test66 test66.output | cat -e

Diff OK :D
= Test 67 ==================================================
$> ./wpcqpo7e21kw29zo1wpyaneq test67.prm
$> diff -U 3 user_output_test67 test67.output | cat -e

Diff OK :D
= Test 68 ==================================================
$> ./kyoamwynjlxzbybgljh4e5hu test68.prm
$> diff -U 3 user_output_test68 test68.output | cat -e

Diff OK :D
= Test 69 ==================================================
$> ./ao9rwbprblntef8uy2xrkwnb test69.prm
$> diff -U 3 user_output_test69 test69.output | cat -e

Diff OK :D
= Test 70 ==================================================
$> ./x6wvirailkalm35y0lf40rfh test70.prm
$> diff -U 3 user_output_test70 test70.output | cat -e

Diff OK :D
= Test 71 ==================================================
$> ./m81k2464sw6r4iozrwsvnj7m test71.prm
$> diff -U 3 user_output_test71 test71.output | cat -e

Diff OK :D
= Test 72 ==================================================
$> ./xvi997l8sdlkxxq6vuw2zbp7 test72.prm
$> diff -U 3 user_output_test72 test72.output | cat -e

Diff OK :D
= Test 73 ==================================================
$> ./dmq2l8w3o00j761rb81vmga7 test73.prm
$> diff -U 3 user_output_test73 test73.output | cat -e

Diff OK :D
= Test 74 ==================================================
$> ./21bard1f7f6doyru5kg7lobh test74.prm
$> diff -U 3 user_output_test74 test74.output | cat -e

Diff OK :D
= Test 75 ==================================================
$> ./9t0dqcj6dkvatbyncoqhrjqs test75.prm
$> diff -U 3 user_output_test75 test75.output | cat -e

Diff OK :D
= Test 76 ==================================================
$> ./tsnxiiw01duvb2z8wmipf4rc test76.prm
$> diff -U 3 user_output_test76 test76.output | cat -e

Diff OK :D
= Test 77 ==================================================
$> ./so3z48jieg4v56jl5ewclkkp test77.prm
$> diff -U 3 user_output_test77 test77.output | cat -e

Diff OK :D
= Test 78 ==================================================
$> ./zdzdks0sk8cbawp8re0043iq test78.prm
$> diff -U 3 user_output_test78 test78.output | cat -e

Diff OK :D
= Test 79 ==================================================
$> ./19tq8bcivrvhm786r18d61db test79.prm
$> diff -U 3 user_output_test79 test79.output | cat -e

Diff OK :D
All tests OK
Grade: 99

= Final grade: 100 =============================================================
