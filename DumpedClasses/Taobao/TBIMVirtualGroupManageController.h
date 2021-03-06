//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MUKTitleSwitchCellDelegate.h"
#import "TBIMGroupServiceDelegate.h"
#import "TBIMMemberTileCellDelegate.h"
#import "TBIMVirtualGroupServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HUDActivityView, NSArray, NSMutableArray, NSMutableDictionary, NSString, TBCameraSetting, TBIMMemberTileModel, UIAlertController, UIButton, UITableView;

@interface TBIMVirtualGroupManageController : UIViewController <TBIMVirtualGroupServiceDelegate, UITableViewDelegate, UITableViewDataSource, TBIMGroupServiceDelegate, TBIMMemberTileCellDelegate, MUKTitleSwitchCellDelegate>
{
    NSString *_currentEditPageTitle;
    NSString *_virtualGroupId;
    id <TBIMVirtualGroupServiceAdapter> _virtualGroupService;
    UITableView *_tableView;
    id <TBIMGroupAdapter> _virtualGroupInfo;
    id <TBIMGroupServiceAdapter> _groupService;
    UIButton *_bottomButton;
    TBIMMemberTileModel *_memberTileModel;
    HUDActivityView *_hudView;
    UIAlertController *_photoActionSheet;
    NSMutableArray *_friendsArray;
    unsigned long long _selfIdentity;
    NSArray *_manageConfig;
    NSMutableDictionary *_weexModelDict;
    TBCameraSetting *_cameraSetting;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) TBCameraSetting *cameraSetting; // @synthesize cameraSetting=_cameraSetting;
@property(retain, nonatomic) NSMutableDictionary *weexModelDict; // @synthesize weexModelDict=_weexModelDict;
@property(retain, nonatomic) NSArray *manageConfig; // @synthesize manageConfig=_manageConfig;
@property(nonatomic) unsigned long long selfIdentity; // @synthesize selfIdentity=_selfIdentity;
@property(retain, nonatomic) NSMutableArray *friendsArray; // @synthesize friendsArray=_friendsArray;
@property(retain, nonatomic) UIAlertController *photoActionSheet; // @synthesize photoActionSheet=_photoActionSheet;
@property(retain, nonatomic) HUDActivityView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) TBIMMemberTileModel *memberTileModel; // @synthesize memberTileModel=_memberTileModel;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
@property(retain, nonatomic) id <TBIMGroupAdapter> virtualGroupInfo; // @synthesize virtualGroupInfo=_virtualGroupInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <TBIMVirtualGroupServiceAdapter> virtualGroupService; // @synthesize virtualGroupService=_virtualGroupService;
@property(copy, nonatomic) NSString *virtualGroupId; // @synthesize virtualGroupId=_virtualGroupId;
- (void).cxx_destruct;
- (void)exitGroup;
- (void)deleteFriendAction;
- (void)addFriendAction;
- (void)gotoGroupMemberPage;
- (void)editAction:(id)arg1 placeHolder:(id)arg2 contentType:(id)arg3;
- (void)photoSelectFinish:(id)arg1 result:(long long)arg2;
- (void)didSelectDeletedViewWithMemberTileView:(id)arg1;
- (void)didSelectAddedViewWithMemberTileView:(id)arg1;
- (void)memberTileView:(id)arg1 didSelectViewModel:(id)arg2;
- (void)ampEdit:(id)arg1 commitAction:(id)arg2;
- (id)pageTitle;
- (void)titleSwitchCell:(id)arg1 switchChange:(_Bool)arg2;
- (void)groupExitFaild:(id)arg1 error:(id)arg2;
- (void)groupExitSuccess:(id)arg1;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupUserUpdatedFailed:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (void)virtualGroupManageInfoConfigUpdate:(id)arg1;
- (void)bottomButtonClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearDelegateAndNotify;
- (void)setupBottomButtonTitle;
- (void)updateMemberList;
- (void)setUpMemberTitleModel;
- (void)setupFooterView;
- (void)setupTableView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

