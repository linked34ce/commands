#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

    char option1[] = "-n";
    char option2[] = "-t";
    char option3[] = "--version";
    char option4[] = "--help";

    if (argc < 2) {
        printf("rncbd: 1 option required\nUse an option below:\nrncbd [-n] [-t] [--version] [--help]\n");
    } else if (argc > 2) {
        printf("rncbd: a single option required\nUse only 1 option below:\nrncbd [-n] [-t] [--version] [--help]\n");
    } else if (strcmp(argv[1], option1) == 0) {
        printf("___________\n|         |    |￣￣￣￣￣￣￣￣￣￣￣|\n|  >   <  |   ／  璃奈ちゃんボード    |\n| `` ▿ `` |   ＼      『にっこりん♪』 |\n|         |    |______________________|\n￣￣￣￣￣￣\n");
    } else if (strcmp(argv[1], option2) == 0) {
        printf("\n     ﾃﾝｼﾃﾝｻｲﾃﾝﾉｳｼﾞ\n＼＼天使天才天王寺〜！／／\n\n");
    } else if (strcmp(argv[1], option3) == 0) {
        printf("rncbd version 1.1.13\n");
    } else if (strcmp(argv[1], option4) == 0) {
        printf("usage: rncbd [-n] [-t] [--version] [--help]\n\nHere is an explanaton of all rncbd command options:\n\n   -n\t\t\tPrint 'Nikkorin' to the standard output\n   -t\t\t\tPrint 'Angel' to the standard output\n   --version\t\tConfirm the rncbd version\n   --help\t\tShow the way to use rncbd\n\nENJOY IT!\n");
    } else {
        printf("rncbd: unrecognized option '%s'\n", argv[1]);
    }

    return 0;
}