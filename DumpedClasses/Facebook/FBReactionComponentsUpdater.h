//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBReactionDataFetcherListener-Protocol.h"

@class FBComponentTableViewDataSource, FBReactionComponentKitCardAdapterDelegate, FBReactionContext, FBReactionUnitModelLoadingIndicator, FBUserSession, NSMutableDictionary, NSString;
@protocol FBReactionDataFetcherProtocol;

@interface FBReactionComponentsUpdater : NSObject <FBReactionDataFetcherListener>
{
    FBComponentTableViewDataSource *_componentDataSource;
    FBUserSession *_session;
    NSMutableDictionary *_graphQLIDToAdapterCacheId;
    FBReactionUnitModelLoadingIndicator *_loadingMoreSpinnerModel;
    _Bool _hasLoadingMoreSpinner;
    unsigned long long _numberOfStoriesInTableView;
    FBReactionContext *_reactionContext;
    FBReactionComponentKitCardAdapterDelegate *_adapterDelegate;
    id <FBReactionDataFetcherProtocol> _dataFetcher;
}

@property(retain, nonatomic) id <FBReactionDataFetcherProtocol> dataFetcher; // @synthesize dataFetcher=_dataFetcher;
- (void).cxx_destruct;
- (void)_updateLoadMoreSpinnerWithNewIndexPathsLoaded:(id)arg1 items:(struct Items *)arg2;
- (id)_indexPathForUnitWithGraphQLID:(id)arg1;
- (void)_enqueueChangesetForLoadedUnits:(id)arg1 atIndexPaths:(id)arg2 wasUpdated:(_Bool)arg3;
- (void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3;
- (void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(_Bool)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(_Bool)arg8 userInfo:(id)arg9;
- (void)_dataFetcher:(id)arg1 didRemoveUnits:(id)arg2 fromLoadedUnits:(id)arg3;
- (id)_indexPathsForNewUnits:(id)arg1;
- (void)_dataFetcher:(id)arg1 didLoadUnits:(id)arg2 sessionId:(id)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(_Bool)arg5;
- (void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(_Bool)arg3 error:(id)arg4 userInfo:(id)arg5;
- (void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3;
- (void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3;
- (void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2;
- (void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2;
- (void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3;
- (void)dataFetcherWillStartLoading:(id)arg1 userInfo:(id)arg2;
- (void)_consistentFieldDidUpdate:(id)arg1 observationHandle:(id)arg2;
- (void)_startObservingUnit:(id)arg1;
- (void)_enqueueUnitsInRange:(struct _NSRange)arg1 fromSet:(id)arg2 allIndexPaths:(id)arg3;
- (void)_batchEnqueue:(id)arg1;
- (id)initWithSession:(id)arg1 reactionContext:(id)arg2 componentDataSource:(id)arg3 dataFetcher:(id)arg4 componentDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

