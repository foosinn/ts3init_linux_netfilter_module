/*
 *      This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License; either
 *      version 2 of the License, or any later version, as published by the
 *      Free Software Foundation.
 */
 
#ifndef COMPAT_SKBUFF_H
#define COMPAT_SKBUFF_H 1

struct tcphdr;
struct udphdr;

#define skb_ifindex(skb) (skb)->skb_iif
#define skb_nfmark(skb) (((struct sk_buff *)(skb))->mark)

#ifdef CONFIG_NETWORK_SECMARK
#	define skb_secmark(skb) ((skb)->secmark)
#else
#	define skb_secmark(skb) 0
#endif

#endif /* COMPAT_SKBUFF_H */
