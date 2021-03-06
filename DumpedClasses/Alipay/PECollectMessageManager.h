//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface PECollectMessageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_collectMsgQueue;
    NSMutableArray *_payMessages;
    _Bool _totalAmountArrive;
    NSString *_sessionId;
    id <PECollectMessageManagerDelegate> _delegate;
}

@property(retain, nonatomic) NSMutableArray *payMessages; // @synthesize payMessages=_payMessages;
@property(nonatomic) __weak id <PECollectMessageManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool totalAmountArrive;
- (id)msgJsonDict:(id)arg1;
- (id)collectMessageFromMsgDict:(id)arg1;
- (id)appendMsgImpl:(id)arg1;
- (void)monitorTotalCollect;
- (void)monitorTotalState;
- (void)filterMessage:(id)arg1;
- (void)appendPayMessages:(id)arg1;
- (void)appendPayMessage:(id)arg1;
- (void)reloadSessionId:(id)arg1;
- (id)init;
- (id)initWithSessionId:(id)arg1;

@end

