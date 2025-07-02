#include <stdio.h>
void left_side_right_angle(){
    int rows=0;
    int i=0,j=0;
    printf("Enter the numer of rows: ");
    scanf("%d",&rows);

    for(i=0;i<rows;i++){
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

void left_side_right_angle_opposite(){
    int rows=0;
    int i=0,j=0;
    printf("Enter the numer of rows: ");
    scanf("%d",&rows);

    for(i=rows;i>0;i--){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void right_side_right_angle(){
    int rows=0;
    int i=0,j=0;
    printf("Enter the numer of rows: ");
    scanf("%d",&rows);

    for(i=0;i<rows;i++){
        for(j=0;j<rows-1;j++){
            printf("-");
        }
        for(int k=rows-1;k>0;k--){
            printf("*");
        }
        printf("\n");
    }
}
void right_side_right_angle_opposite(){
    
}
void center_triangle(){

}
void center_triangle_opposite(){

}

//int main(){
//    int a=1;
//    while(a==1){
//        switch (a){
//            case 1:
//            
//            case 2:
//
//            case 3:
//
//            case 4:
//
//
//        }
//        while(b==)
//    }
//}

int main(){
    right_side_right_angle();
}