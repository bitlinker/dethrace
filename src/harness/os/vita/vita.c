#include <limits.h>
#include <stdio.h>

#include "harness/config.h"
#include "harness/os.h"

void resolve_full_path(char* path, const char* argv0) {
    // TODO: impl?
    return;
}

FILE* OS_fopen(const char* pathname, const char* mode) {
    FILE* f = fopen(pathname, mode);
    if (f != NULL) {
        return f;
    }
    return NULL;
}

size_t OS_ConsoleReadPassword(char* pBuffer, size_t pBufferLen) {
    pBuffer[0] = 0;
    return 0;
}

char* OS_Basename(const char* path) {
	return "";
}

char* OS_GetWorkingDirectory(char* argv0) {
	return "ux0:data/CARMA";
}

void OS_InstallSignalHandler(char* program_name) {
    //  resolve_full_path(_program_name, program_name);

    // /* setup alternate stack */
    // {
    //     stack_t ss = {};
    //     ss.ss_sp = malloc(2 * MINSIGSTKSZ);
    //     if (ss.ss_sp == NULL) {
    //         err(1, "malloc");
    //     }
    //     ss.ss_size = 2 * MINSIGSTKSZ;
    //     ss.ss_flags = 0;

    //     if (sigaltstack(&ss, NULL) != 0) {
    //         err(1, "sigaltstack");
    //     }
    // }

    // /* register our signal handlers */
    // {
    //     struct sigaction sig_action = {};
    //     sig_action.sa_sigaction = signal_handler;
    //     sigemptyset(&sig_action.sa_mask);

    //     sig_action.sa_flags = SA_SIGINFO | SA_ONSTACK;

    //     if (sigaction(SIGSEGV, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    //     if (sigaction(SIGFPE, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    //     if (sigaction(SIGINT, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    //     if (sigaction(SIGILL, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    //     if (sigaction(SIGTERM, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    //     if (sigaction(SIGABRT, &sig_action, NULL) != 0) {
    //         err(1, "sigaction");
    //     }
    // }
}