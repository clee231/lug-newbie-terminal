# Linux Users Group

For individuals interested in Linux, Unix, and their byproducts.

We are also in the ACM office (SELE 2264).

Resources:                        Upcoming Events:
 * 3D Printing (10 cents/gram)     * Newbie Week
 * Arduino                           * 9/6, 9/7, 9/9, 9/12, 9/13
 * Raspberry Pi                      * SEL 2254
 * Test Servers
 * Tiled Displays                  * Install Fest
 * Linux Machines                    * 9/14 5-7 PM
                                     * SEL 2254

Sign Up for our listserv! Email:  listserv@uic.edu 
 with the body  "SUBSCRIBE LUG"

Officer E-mail: lug-uic-officers@googlegroups.com

# Welcome to NEWBIE Week

 * Welcome everyone to the first Linux User’s Group event of the year.

 * This is mostly going to be geared towards students who want to use Linux,
   but do not know how.

 * There will be more events during the year geared towards more advanced users
   of Linux as well.

 * After NEWBIE week, we will be holding an event called install fest. This
   will give opportunities to students to install LINUX as a dualboot or 
   however they would like. We will have many different distros to choose from.


# Possible LUG Events

 * Command of the Week
   * Go over a new linux command every week.
     * A bit more easygoing.

 * Linux From Scratch
   * Create a linux kernel from scratch.
     * Exciting, but be prepared to be challenged.

 * Debugging Competition
   * Debug common linux problems. There will be varying levels of difficulty.

# LUG Install Fest

 * Held September 14th from 5 - 7 PM
   * We will help you install linux on your personal machines!
     * There will be a wide variety of linux distros to choose from.
	   * Mint
	   * Arch
	   * Ubuntu
	   * Fedora (Does not boot UEFI)
	   * CentOS
	   * OpenSUSE
	   * Debian


# Nice Terminal Bro! Using Linux as a Student

                     a8888b.        **Nice Terminal Bro!**
                    d888888b. 
                   8P"YP"Y88      Using Linux as a Student
                   8|o||o|88
                   8'    .88
                   8`._.' Y8.
                  d/      `8b.
                 dP   .    Y8b.
                d8:'  "  `::88b
               d8"         'Y88b
              :8P    '      :888
               8a.   :     _a88P
             ._/"Yaa_:   .| 88P|
             \    YP"    `| 8P  `.
             /     \.___.d|    .'
             `--..__)8888P`._.' 
      
# Agenda

 * What is LUG?
 * What is a terminal?
 * How do you configure terminals?
   * Configuration Files
   * Some pre-made packages
 * Using Linux in classes
   * Basic Linux file Structure
   * Compiling code
     * Makefiles
   * Common Useful commands
      

# Terminals

There are many shells that you can use.

These programs are known as shells, a command line interpreter to facilitating
interactions with the computer.

 * Bash (Bourne Again Shell)
 * zsh 
 * ksh (Korn Shell)
 * csh
 * fish
 * ...

Today, we'll talk about bash. Bash provides many useful features such as
tab completion, interpreted commands, command history and more!


# Configuring Shells

Most shells will allow you to customize many aspects of the shell by modifying
a configuration file.

bash: ~/.bashrc
zsh: ~/.zshrc

These files holds your personal settings for the particular shell. 

# Configuration Files

Some common settings to change:

 * PS1 (Prompt String 1) - This is an environment variable to control the 
   Prompt String. 
 * alias - Create a shortcut for another command.

# Some Premade packages

 * Sexy Bash Prompt - https://github.com/twolfson/sexy-bash-prompt

 * Powerline Shell  - https://github.com/banga/powerline-shell

 * Make your own! - http://bashrcgenerator.com/

# Basic Linux File Structure

 * /          - root 
 * /home      - Home directories
 * /bin       - Executables
 * /etc       - Configuration files
 * /usr/local - Unprivileged file storage
 * /opt       - Optional files, Extra
 * /var       - Variable files
 * /proc      - System Generated system info


# Compiling Code - Makefiles

Makefiles allow you to forget about the long compilation strings needed when
compiling.

Helps you automate specific tasks needed when compiling.

(DEMO): https://github.com/clee231/lug-newbie-terminal

# Using Linux in Class - Common commands & Programs
 * cd - Change Directory
 * ls - List
 * ls -la - List -long -all
 * mkdir - Make Directory
 * pwd - Print Working Directory
 * cp - Copy
 * scp - Secure Copy
 * mv - Move
 * vim - A great text editor in the terminal
 * tmux - Terminal Multiplexer
 * !! - (Bang Bang) - Repeat the last command
 * !<num> - Repeat the nth command.
 * history - View command history

# Thank You for Coming!

                              Questions???

Look forward to the other Newbie Week presentations:

 Monday  - vim
 Tuesday - Beautiful Desktops
<!--
vim:tw=80:ft=markdown:
-->
