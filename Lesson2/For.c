#include <stdio.h>
//以降登場するNは100に置換する
#define N 100

int main (void) {
    int a, i;

    a = 3;
    //for(初期化;条件式;{}が終わった後にする処理):条件式を満たす間{}の処理をループする
    //この場合はi < 5を満たす間ずっと{}の処理をループする
    //i=0,1,2,3,4の場合の処理が実行される
    for (i = 0; i < 5; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    printf("\n");

    //この場合はi=5,4,3,2,1の処理が実行される
    //あんまり使うことがない例
    for (i = 5;i > 0; i--) {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    //for:処理回数(ループ数)を明確にしたいときはfor文がいい気がする
    //while:for文でやりにくい処理

    //i < 100なので、100回ループする
    for (i = 0; i < N; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    //i > 100なので、一回も実行されない(気を付けよう)
    for (i = 0; i > N; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    /*
        練習2-1:17n+13>324(nは整数)を満たす最小のnを求めよう
        練習2-2:17*1から17*n(nは整数)までの総和を求めよう
    */

    return 0;
}