# Readme: ocelot-slock
- forked from slock
- pre-configured for use with ocelot-wm *and*
- applied some useful patches: **pam-auth**

**ocelot-slock**
"ocelot-slock" is a simple screen locker utility for X

## Dependencies
- Xlib header files

## Install
- edit config.h to customize colors and set pam-service
- edit config.mk to match your local setup (ocelot-slock is installed into the /usr/local namespace by default).
- afterwards enter the following command to build and install slock (as root):

```.sh
make clean install
```

## Usage

```.sh
ocelot-slock  # and enter your password to get out
```
