//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMHotDjRadioRecommendRequest : NMBaseRequest
{
    unsigned long long _pageSize;
}

@property(readonly, nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
- (id)initWithPageSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;

@end
