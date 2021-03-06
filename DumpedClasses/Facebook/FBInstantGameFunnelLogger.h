//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBQuicksilverFunnelLoggingConfiguration;

@interface FBInstantGameFunnelLogger : NSObject
{
    id <FBQuicksilverFunnelLoggingConfiguration> _configuration;
    NSString *_initialGameID;
}

- (void).cxx_destruct;
- (void)endFunnel;
- (void)switchToNewGame:(id)arg1 fromOldGameInfo:(id)arg2 referralInfo:(id)arg3;
- (void)_logEventWithFunnelAction:(id)arg1 gameID:(id)arg2 referralInfo:(id)arg3 gamePlayID:(id)arg4 isPlaying:(_Bool)arg5;
- (void)logGameBackgroundedEvent:(id)arg1 referralInfo:(id)arg2 gamePlayID:(id)arg3 isPlaying:(_Bool)arg4;
- (void)logGameForegroundedEvent:(id)arg1 referralInfo:(id)arg2 gamePlayID:(id)arg3 isPlaying:(_Bool)arg4;
- (void)logQuicksilverEndEvent:(id)arg1 referralInfo:(id)arg2 gamePlayID:(id)arg3 isPlaying:(_Bool)arg4;
- (void)logGameContextUpdateEventWithSource:(id)arg1 referralInfo:(id)arg2 gameID:(id)arg3;
- (void)logChallengeListShownEventWithSource:(id)arg1 gameID:(id)arg2 referralInfo:(id)arg3;
- (void)logGamePlayEndEventWithScore:(id)arg1 referralInfo:(id)arg2 gamePlayID:(id)arg3;
- (void)logGamePlayStartEventFromSource:(id)arg1 referralInfo:(id)arg2 gamePlayID:(id)arg3;
- (void)logGameActiveEvent:(id)arg1 referralInfo:(id)arg2;
- (void)logGameReadyEvent:(id)arg1 referralInfo:(id)arg2;
- (void)logGameLoadingStartedEvent:(id)arg1 referralInfo:(id)arg2;
- (void)logGameInfoFetchEndEvent:(id)arg1 referralInfo:(id)arg2 supportCheckEnumString:(id)arg3 platformVersionEnumString:(id)arg4;
- (void)logGameInfoFetchEvent:(id)arg1 referralInfo:(id)arg2;
- (void)logQuicksilverStartEvent:(id)arg1 referralInfo:(id)arg2;
- (id)initWithConfiguration:(id)arg1 initialGameID:(id)arg2;

@end

