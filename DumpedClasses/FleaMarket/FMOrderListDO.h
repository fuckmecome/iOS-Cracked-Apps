//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray<FMOrderInfoDO>, NSString;

@interface FMOrderListDO : NSObject
{
    _Bool _isSuccess;
    _Bool _nextPage;
    unsigned long long _totalCount;
    NSMutableArray<FMOrderInfoDO> *_items;
    NSString *_serverTime;
}

@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSMutableArray<FMOrderInfoDO> *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

