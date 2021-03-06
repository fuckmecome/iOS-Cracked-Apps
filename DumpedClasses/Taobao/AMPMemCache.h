//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPDataCache.h"

@class NSMutableDictionary, NSString;

@interface AMPMemCache : NSObject <AMPDataCache>
{
    struct _opaque_pthread_rwlock_t _dataRWLock;
    struct _opaque_pthread_rwlock_t _classRWLock;
    NSMutableDictionary *_gourpDict;
    id <AMPDataCacheDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationResignActive:(id)arg1;
- (id)createDataGroupWithGroupName:(id)arg1;
- (void)recycleAllGroup;
- (void)clearAll;
- (void)removeDataGroupForName:(id)arg1;
- (id)dataGroupForName:(id)arg1;
- (void)reset;
@property(nonatomic) __weak id <AMPDataCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

