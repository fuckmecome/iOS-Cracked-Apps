//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBFlowBaseInfo.h"

@class NSString;

@interface TBFlowImpairmentInfo : TBFlowBaseInfo
{
    _Bool isSuccess;
    NSString *errorCode;
    NSString *errorMsg;
}

@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
- (void).cxx_destruct;
- (id)toDictionary;

@end

