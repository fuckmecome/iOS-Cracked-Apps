//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FriendInvitationBLL : NSObject
{
}

+ (void)cleanAllFriendInvitationWithMsgId:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 withFailBlock:(CDUnknownBlockType)arg3;
+ (_Bool)cleanAllFriendInvitation;
+ (void)changeFriendInvitationStatus:(id)arg1 withMessage:(id)arg2;
+ (void)acceptFriendInvitationWithUid:(long long)arg1 withModel:(id)arg2 withSuccessBlock:(CDUnknownBlockType)arg3 withFailBlock:(CDUnknownBlockType)arg4;

@end
