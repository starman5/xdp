// To prevent multiple inclusions of the same header file
#ifndef __COMMON_KERN_USER_H
#define __COMMON_KERN_USER_H

struct datarec {
    __u64 rx_packets;
}

#ifndef XDP_ACTION_MAX
#define XDP_ACTION_MAX (XDP_REDIRECT + 1)
#endif

#endif