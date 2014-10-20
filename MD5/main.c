//
//  main.c
//  MD5
//
//  Created by Owen Wang on 2014-10-20.
//  Copyright (c) 2014 OwenInc. All rights reserved.
//

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "MD5.h"

static char * progname;


int main(int argc, char ** argv) {
    
    progname = argv[0];
    
    int c, status = 0;
    int fileflag = 0;
    while ((c = getopt(argc, argv, "f") != EOF)) {
        switch (c) {
            case 'f':
                fileflag = 1;
                break;
            case '?':
                status = 1;
                break;
            default:
                break;
        }
        if(status || optind + 1 != argc){
            fprintf(stderr, "usage: %s [-b count] [name]\n", progname);
        }
    }
    
    
    
    return 0;
}
