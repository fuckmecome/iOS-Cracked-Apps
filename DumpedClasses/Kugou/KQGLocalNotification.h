//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KQGLocalNotification : NSObject
{
    unsigned long long _ringTimeInterval;
    long long _groupId;
}

+ (id)shareInstance;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void)playAlertSound;

@end

