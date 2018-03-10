#include <cstdio>
#include <string>
#include<cstring>
#include<vector>
#include<map>
#include<iostream>

using namespace std;
int main(){
    int w,h,flagi = 0,flagj = 0,cnt = 1;
    scanf("%d %d",&w,&h);

    getchar();
    char maze[w][h];
    memset(&maze,'0',sizeof(maze));
    int flag[w][h];
    memset(&flag,0,sizeof(flag));
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            maze[i][j]=getchar();
        }
        getchar();
    }

    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            if(maze[i][j]>= 'A' && maze[i][j]<= 'Z'){
                flag[i][j] = 1;
                flagi = i;
                flagj = j;
                //break;
            }
            if(maze[i][j] == '*'){
                flag[i][j] = 1;
            }
        }
    }
 
int step = 0;

  
   
    while(
        (flagi-1 >= 0 || flag[flagi-1][flagj] != 1)||
        (flagj+1 != w || flag[flagi][flagj+1] != 1)||
        (flagi+1 != h || flag[flagi+1][flagj] != 1)||
        (flagj-1 >= 0 || flag[flagi][flagj-1] != 1)
	)
{	
	

    if(maze[flagi][flagj]=='U'){
       
        if(flagi-1 < 0 || flag[flagi-1][flagj]== 1){
            maze[flagi][flagj] = 'R';
            step ++;
             if(step==4){
    		break;
		}
            continue;

        }else{
            flag[flagi-1][flagj] = 1;
            maze[flagi-1][flagj] = 'U';
            step = 0;
            flagi--;
            cnt++;
           
        }

    }
      if(maze[flagi][flagj]=='R'){
       
        if(flagj+1 >= h || flag[flagi][flagj+1]== 1){
            maze[flagi][flagj] = 'D';
            step++;
            if(step==4){
    		break;
		}
            continue;

        }else{
            flag[flagi][flagj+1] = 1;
            maze[flagi][flagj+1] = 'R';
            step = 0;
            flagj++;
            cnt++;
            
        }

    }
      if(maze[flagi][flagj]=='D'){
       
        if(flagi+1 >= w || flag[flagi+1][flagj]== 1){
            maze[flagi][flagj] = 'L';
            step++;
             if(step==4){
    		break;
		}
            continue;

        }else{
            flag[flagi+1][flagj] = 1;
            maze[flagi+1][flagj] = 'D';
            step = 0;
            flagi++;
            cnt++;
           
        }

    }
      if(maze[flagi][flagj]=='L'){
       
        if(flagj-1 < 0 || flag[flagi][flagj-1]== 1){
            maze[flagi][flagj] = 'U';
            step++;
            if(step==4){
    		break;
		}
            continue;

        }else{
            flag[flagi][flagj-1] = 1;
            maze[flagi][flagj-1] = 'L';
            step = 0;
            flagj--;
            cnt++;
            
        }

    	}

    }
    


printf("%d",cnt);

    return 0;
}

