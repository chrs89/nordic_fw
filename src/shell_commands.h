#ifndef SHELL_COMMANDS_H
#define SHELL_COMMANDS_H

#include <zephyr/kernel.h>
#include <zephyr/shell/shell.h>

int cmd_hello_world(const struct shell *shell, size_t argc, char **argv);

#endif // SHELL_COMMANDS_H
