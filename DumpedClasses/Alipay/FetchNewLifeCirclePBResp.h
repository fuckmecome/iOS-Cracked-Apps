//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class LFCPBRpcResult, NSArray, NSString;

@interface FetchNewLifeCirclePBResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *feedList; // @dynamic feedList;
@property(readonly) _Bool hasLastFeedId; // @dynamic hasLastFeedId;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasResult; // @dynamic hasResult;
@property(readonly) _Bool hasSystemTime; // @dynamic hasSystemTime;
@property(retain, nonatomic) NSString *lastFeedId; // @dynamic lastFeedId;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(retain, nonatomic) LFCPBRpcResult *result; // @dynamic result;
@property(nonatomic) long long systemTime; // @dynamic systemTime;

@end

