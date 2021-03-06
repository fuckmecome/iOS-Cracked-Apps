//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQConfigUpdater, MQQGCReportRequest, MQQGPGameListRequest, MQQGameCenterRequest, NSDate, NSMutableArray, NSString;

@interface MQQGameCenterManager : NSObject <MQQSharkRequestDelegate>
{
    MQQGameCenterRequest *_gameCenterRequest;
    MQQGPGameListRequest *_gameListRequest;
    MQQGCReportRequest *_gcReportRequest;
    long long _gameCenterDataOffsetTime;
    NSDate *_lastCheckNewGameDate;
    NSDate *_lastCheckCategoryDate;
    NSDate *_lastCheckGameCenterDate;
    MQQConfigUpdater *_configNewGameUpdater;
    MQQConfigUpdater *_configCategoryUpdater;
    NSMutableArray *_gcReportInfoArray;
    NSMutableArray *_gcDisplayedGameItemArray;
}

+ (long long)loadOffsetTimeFromGCNewGameConfig;
+ (id)loadLocalGCNewGameConfig;
+ (id)shareGameCenterManager;
@property(retain, nonatomic) NSMutableArray *gcDisplayedGameItemArray; // @synthesize gcDisplayedGameItemArray=_gcDisplayedGameItemArray;
@property(retain, nonatomic) NSMutableArray *gcReportInfoArray; // @synthesize gcReportInfoArray=_gcReportInfoArray;
@property(retain, nonatomic) MQQConfigUpdater *configCategoryUpdater; // @synthesize configCategoryUpdater=_configCategoryUpdater;
@property(retain, nonatomic) MQQConfigUpdater *configNewGameUpdater; // @synthesize configNewGameUpdater=_configNewGameUpdater;
@property(retain, nonatomic) NSDate *lastCheckGameCenterDate; // @synthesize lastCheckGameCenterDate=_lastCheckGameCenterDate;
@property(retain, nonatomic) NSDate *lastCheckCategoryDate; // @synthesize lastCheckCategoryDate=_lastCheckCategoryDate;
@property(retain, nonatomic) NSDate *lastCheckNewGameDate; // @synthesize lastCheckNewGameDate=_lastCheckNewGameDate;
- (void)insertDisplayedWithGameItem:(id)arg1;
- (_Bool)isGameItemDisplayed:(id)arg1;
- (void)loadGameDisplayedList;
- (void)startReportInfoArray;
- (void)saveReportInfoArray;
- (void)insertReportWithGameList:(id)arg1;
- (void)loadReportInfoArray;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)updateGamePackData;
- (void)updateGameCenterData;
- (void)gameCenterConfigUpdate;
- (id)loadGCCategory:(id)arg1;
- (void)addDNDGroupItemFor:(id)arg1;
- (id)loadGamePackEntranceInfo;
- (id)displayGameGroupList;
- (void)saveGameGroupList:(id)arg1;
- (id)groupListWithRequest:(id)arg1;
- (_Bool)canGameCenterDataUpdate;
- (void)updateLastGameCenterDataUpdateTimestampToNow;
- (double)lastGameCenterDataUpdateTimestamp;
@property(readonly, nonatomic) long long gcDataUpdateOffset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

