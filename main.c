#include stdio.h
#include unistd.h
int main(int argc, char argv[]){
    if(argc<3){
        if(argv[2].compareTo("--help")){
            printf("--help Show the options to use the program\n");
            printf("-a [UUID] Add partition to fstab\n");
            printf("-d [UUID] Delete partition from fstab\n");
            printf("-l List all drives connected to the computer\n");
            printf("-g Guided process to manage fstab drives");
        }
            
        else if(argv[2].compareTo("-l")){
            //TODO Show all drives connected to the computer
        }
        else if(argv[2].compareTo("-g")){
            //TODO Show the prompt to manage the drives
        }
        else{
            printf("Bad attributes\n");
            return -1;
        }
    }
    else if(argv[2].compareTo("-a")){
            //TODO Show all drives connected to the computer
    }
    else if(argv[2].compareTo("-d")){
            //TODO Show all drives connected to the computer
    }
}