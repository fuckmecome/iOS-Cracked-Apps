//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMRadioTrashSongsRequest : NMBaseRequest
{
    unsigned long long _limit;
    long long _time;
}

@property(readonly, nonatomic) long long time; // @synthesize time=_time;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)initWithLastTime:(long long)arg1 limit:(unsigned long long)arg2;

@end

