//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSessionSummaryInfoListRes.h"

@class NSArray<PSessionSummaryInfo>, NSString, PResult;

@interface PSessionSummaryInfoListRes : NSObject <PSessionSummaryInfoListRes>
{
    _Bool _hasMore;
    int _fetchs;
    PResult *_result;
    unsigned long long _userId;
    unsigned long long _start;
    NSArray<PSessionSummaryInfo> *_sessions;
}

@property(retain, nonatomic) NSArray<PSessionSummaryInfo> *sessions; // @synthesize sessions=_sessions;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int fetchs; // @synthesize fetchs=_fetchs;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) PResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

