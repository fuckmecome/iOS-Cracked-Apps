//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface UserSummaryCoverGetItem : SAMRequestItem
{
    int _type;
    long long _uin;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end

