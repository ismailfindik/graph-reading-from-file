#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>

int graph[6][6];
void graphokuma(){
	int i = 0;
    FILE *fp = fopen("bfs.txt", "r");
    while(fscanf(fp, "%d %d %d %d %d %d",
                 &graph[i][0],
                 &graph[i][1],
                 &graph[i][2],
                 &graph[i][3],
                 &graph[i][4],
                 &graph[i][5]) !=EOF){
        i = i + 1;
    }
}
main(){
	graphokuma();
//	BFS(2);
	getch();
}
