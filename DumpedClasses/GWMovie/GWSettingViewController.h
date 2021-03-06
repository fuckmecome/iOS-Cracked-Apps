//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GWEvents, GWGetUserPushSettingListProvider, GWPushModel, NSArray, NSMutableArray, NSString, UITableView, UIView;

@interface GWSettingViewController : GWBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    float _cacheFileSize;
    UITableView *_settingTableView;
    NSArray *_pushSettingTextArray;
    NSMutableArray *_otherSettingTextArray;
    NSMutableArray *_opinionSettingTextArray;
    NSMutableArray *_appRecommendTextArray;
    UIView *_settingTableFootView;
    GWGetUserPushSettingListProvider *_userPushSettingListProvider;
    GWPushModel *_pushModel;
    GWEvents *_events;
}

@property(retain, nonatomic) GWEvents *events; // @synthesize events=_events;
@property(nonatomic) float cacheFileSize; // @synthesize cacheFileSize=_cacheFileSize;
@property(retain, nonatomic) GWPushModel *pushModel; // @synthesize pushModel=_pushModel;
@property(retain, nonatomic) GWGetUserPushSettingListProvider *userPushSettingListProvider; // @synthesize userPushSettingListProvider=_userPushSettingListProvider;
@property(retain, nonatomic) UIView *settingTableFootView; // @synthesize settingTableFootView=_settingTableFootView;
@property(retain, nonatomic) NSMutableArray *appRecommendTextArray; // @synthesize appRecommendTextArray=_appRecommendTextArray;
@property(retain, nonatomic) NSMutableArray *opinionSettingTextArray; // @synthesize opinionSettingTextArray=_opinionSettingTextArray;
@property(retain, nonatomic) NSMutableArray *otherSettingTextArray; // @synthesize otherSettingTextArray=_otherSettingTextArray;
@property(retain, nonatomic) NSArray *pushSettingTextArray; // @synthesize pushSettingTextArray=_pushSettingTextArray;
@property(retain, nonatomic) UITableView *settingTableView; // @synthesize settingTableView=_settingTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)settingViewcheckAppVersion;
- (void)gotoAppRecommendViewAction:(id)arg1;
- (void)gotoFeedBackViewAction:(id)arg1;
- (long long)fileSizeAtPath:(id)arg1;
- (float)folderSizeAtPath:(id)arg1;
- (float)getCacheFileSize;
- (void)clearCacheAction:(id)arg1;
- (void)backToHomeTab;
- (void)handleLogoutAction;
- (void)logOutButtonAction:(id)arg1;
- (void)layoutTableFootView;
- (void)aboutUs;
- (void)score;
- (id)reloadViewDateWithIndexrRow:(long long)arg1 indexSection:(long long)arg2;
- (void)loadData;
- (void)requestData;
- (void)cancelSettingClick:(id)arg1;
- (void)customMadeSettingVCPush;
- (void)pushSwitchButtonAction:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initNotification;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gwInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

