//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBInstantGameReferralInfo, FBUserSession;
@protocol FBServiceTransactionMutating;

@interface FBInstantGameContextSwitchInfoFetcher : NSObject
{
    FBUserSession *_session;
    FBInstantGameReferralInfo *_referralInfo;
    id <FBServiceTransactionMutating> _requestToken;
    _Bool _showChallengeList;
}

- (void).cxx_destruct;
- (void)fetchContextSwitchIntoWithContextID:(id)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithSession:(id)arg1;

@end

