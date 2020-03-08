/* Valid declaration*/
int abc[2][2] = {1, 2, 3 ,4 }  
/* Valid declaration*/ 
int abc[][2] = {1, 2, 3 ,4 }  
/* Invalid declaration – you must specify second dimension*/
int abc[][] = {1, 2, 3 ,4 }   
/* Invalid because of the same reason  mentioned above*/
int abc[2][] = {1, 2, 3 ,4 }
