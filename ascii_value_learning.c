// #include<stdio.h>
// void main(){
//     char s;
//     for(s='A'; s<='Z'; s++)
//     {
//         printf("\n %c - %c ",s++,s+32);
//     }
// }

//  A - a 
//  C - c 
//  E - e 
//  G - g 
//  I - i 
//  K - k 
//  M - m 
//  O - o 
//  Q - q 
//  S - s 
//  U - u 
//  W - w 
//  Y - y
 
 
 
// /// A=65 B=66 C=67.....

// #include<stdio.h>
// void main(){
//     int num=65;
//     for(int i=num; i<=90; i++)
//     {
//         printf("%c=%d, ",num,num);
//         num++;
//     }
// }
// A=65, B=66, C=67, D=68, E=69, F=70, G=71, H=72, I=73, J=74, K=75, L=76, M=77, N=78, O=79, P=80, Q=81, R=82, S=83, T=84, U=85, V=86, W=87, X=88, Y=89, Z=90,



// #include<stdio.h>
// void main(){
//     int i;
//     for(i=1; i<=100; i++)
//     {
//         if(i%4==0)
//         {
//             printf("\t %d",i);
//         }
//     }
// }

// 	 4	 8	 12	 16	 20	 24	 28	 32	 36	 40	 44	 48	 52	 56	 60	 64	 68	 72	 76	 80	 84	 88	 92	 96	 100



// A c E g I k ......n
// #include<stdio.h>
// void main(){
//     int i;
//     for(i=2; i<=25; i+=2)
//     {
//         // printf("\t %d - %d ",i, i+63);
//         //            2 - 65    2, 2+63  = 65 = A
//         // printf("\t %d - %d ",i, i+63+32);
//         //            2 - 97    2, 2+63+32 = 97 = a
//         if(i%4==0)
//         {
//             printf("\t %c ",i+63+32);
//         }
//         else
//         {
//             printf("\t %c ", i+63);
//         }
//     }
// }

// 	 A 	 c 	 E 	 g 	 I 	 k 	 M 	 o 	 Q 	 s 	 U 	 w 
