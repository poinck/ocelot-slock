# Readme: ocelot-slock
- forked from slock
- pre-configured for use with ocelot-wm *and*
- applied some useful patches: **pam-auth**

**ocelot-slock**
"ocelot-slock" is a simple screen locker utility for X

## Dependencies
- Xlib header files


## Install
- edit config.mk to match your local setup (slock is installed into the /usr/local namespace by default).
- afterwards enter the following command to build and install slock
```.sh
make clean install
```

## Usage
```.sh
slock  # and enter your password to get out
```
