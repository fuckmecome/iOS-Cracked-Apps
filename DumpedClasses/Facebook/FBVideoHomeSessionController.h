//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBVideoHomeSessionControllerProtocol-Protocol.h"

@class FBVideoHomeSession, FBVideoHomeSessionControllerListenerAnnouncer, NSString;
@protocol FBJewelNetworkDataSource, FBVideoHomeGuideDataFetcherProtocol, FBVideoHomeNotificationSeenStateAccessor, FBVideoHomePrefetchControllerProtocol, FBVideoHomeViewControllerProtocol;

@interface FBVideoHomeSessionController : NSObject <FBVideoHomeSessionControllerProtocol>
{
    _Bool _pausedBecauseOfBackgrounding;
    _Bool _endedWhileInTransition;
    _Bool _listeningToBackgroundAndForegroundEvents;
    FBVideoHomeSessionControllerListenerAnnouncer *_announcer;
    id <FBVideoHomeGuideDataFetcherProtocol> _guideDataFetcher;
    id <FBVideoHomeNotificationSeenStateAccessor> _stateAccessor;
    id <FBVideoHomeViewControllerProtocol> _viewController;
    id <FBVideoHomePrefetchControllerProtocol> _prefetchController;
    FBVideoHomeSession *_videoHomeSession;
    id <FBJewelNetworkDataSource> _jewelDataSource;
    double _lastSawDataMutationRecordedTimestamp;
}

@property(readonly, nonatomic) double lastSawDataMutationRecordedTimestamp; // @synthesize lastSawDataMutationRecordedTimestamp=_lastSawDataMutationRecordedTimestamp;
@property(readonly, nonatomic) id <FBJewelNetworkDataSource> jewelDataSource; // @synthesize jewelDataSource=_jewelDataSource;
@property(readonly, nonatomic) FBVideoHomeSession *videoHomeSession; // @synthesize videoHomeSession=_videoHomeSession;
- (void).cxx_destruct;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_stopListeningForBackgroundForegroundEvents;
- (void)_listenForBackgroundForegroundEvents;
- (void)restartSessionPostForegrounding;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)buildDebugInfo;
- (void)recordVideoHomeUserSawHeadLoadData;
- (void)transtionToAnotherVideoHomeSurfaceWithPlayerOrigin:(id)arg1 playerSubOrigin:(id)arg2;
- (void)endSessionWithExitPoint:(id)arg1 exitPointValue:(id)arg2 extraAnalytics:(id)arg3 endIfInTransition:(_Bool)arg4;
- (void)startSessionWithEntryPointType:(id)arg1 playerOrigin:(id)arg2 playerSubOrigin:(id)arg3;
- (void)dealloc;
- (void)setVideoHomeViewController:(id)arg1;
- (id)initWithVideoHomeSession:(id)arg1 jewelDataSource:(id)arg2 guideDataFetcher:(id)arg3 stateAccessor:(id)arg4 prefetchController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

