#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char path_buffer[_MAX_PATH] = "D:\\soft\\programming\\vmware.exe";
    char drive[_MAX_DRIVE];
    char dir[_MAX_DIR];
    char fname[_MAX_FNAME];
    char ext[_MAX_EXT];

    string str("D:\\soft\programming\\vmware.exe");
    printf("---- %d \n", str.find_last_of('\\\\'));

    _splitpath( path_buffer, drive, dir, fname, ext );

    printf("Drive:%s\n file name: %s\n file type: %s\n",drive,fname,ext);
    strcat(fname,ext);
    printf("File name with extension :%s\n",fname);

    return 0;
}
