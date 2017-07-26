//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCConfigCenter : NSObject
{
    NSMutableDictionary *_metaData;
    NSMutableArray *_syncKeysBeingProcessed;
    NSString *_gifZoom;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *gifZoom; // @synthesize gifZoom=_gifZoom;
@property(retain, nonatomic) NSMutableArray *syncKeysBeingProcessed; // @synthesize syncKeysBeingProcessed=_syncKeysBeingProcessed;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
- (id)getGifZoomValue;
- (void)setupGifZoom:(id)arg1;
- (void)registerWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)stringValueForSocialKey:(id)arg1;
- (id)stringValueForSDKKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)handleSyncStringValue:(id)arg1 key:(id)arg2;
- (void)doHandleSyncWith:(id)arg1;
- (void)syncHandler:(id)arg1;
- (void)registerSyncObserverWithName:(id)arg1;
- (void)configServiceNotify:(id)arg1;
- (id)init;

@end
