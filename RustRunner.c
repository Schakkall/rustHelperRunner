/* This is my rust runner, it will compile your project as desired, 
since you inform the location of your rust compiler (rustc) or your Cargo builder.
*/

/* The program will accept a help command to remember the user about the usage */

/* Basically three parameters are mandatory:
The directory of the source code;
The location of the rust(Rustc) compiler or cargo(Cargo) builder;
The destination of the build project */



#include <stdio.h>
#include <string.h>

/* #include <errno.h> // Import this lib to be padronized */

#define EXIT_PARAMETERS_INVALID 10
#define EXIT_SOURCE_CODE_NOT_FOUND 11
#define EXIT_YOU_HAVE_NO_PERMISSION_TO_WRITE 12
#define EXIT_SUCCESSS 0



unsigned short check(char *directory[]){
	return EXIT_SOURCE_CODE_NOT_FOUND; //Return exit code file or directory not found
}

unsigned  short checkCredentialsForWrite(char *directory[]){

	return EXIT_YOU_HAVE_NO_PERMISSION_TO_WRITE; //Return exit code write permission denied
}

unsigned int compile(char *sourceCode, char *compile){
	return 0; //Return the compiler code for error or success
}



int main(int argc, char *argv[]){
	int exitCode = EXIT_PARAMETERS_INVALID;
	// 1 - compiler, 2 - source code, 3 - object code, 4 - target plataform (default unix)
	if ((((argc == 3) || (argc == 4))) && ((argv[1] != NULL) && (argv[2] != NULL) && (argv[3] != NULL))) {
		printf("%s %s %s %s", 
			argv[1], argv[2] ,argv[3], (argv[4] == NULL) ? "unix" : argv[4] );
			
		exitCode = EXIT_SUCCESSS;
	}
	return exitCode;
}

/* This code was developed only for my development eviroment. You can confront others problems, or none, in your plataform.
   This code written in Berkeley Software Distribution Operation System in the release 12.
*/
/* Launcher v1 */

