//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XMPPJID, XMPPPresence;

@protocol XMPPRoomOccupant <NSObject>
- (XMPPJID *)realJID;
- (NSString *)affiliation;
- (NSString *)role;
- (NSString *)nickname;
- (XMPPJID *)jid;
- (XMPPJID *)roomJID;
- (XMPPPresence *)presence;
@end

