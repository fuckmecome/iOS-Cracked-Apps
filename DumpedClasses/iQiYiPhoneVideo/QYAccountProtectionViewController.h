//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IQYCloseDeviceProtectManager, IQYGetOnlineDeviceManager, IQYOnlineDeviceInfo, IQYSetSafeDeviceManager, NSDictionary, NSMutableArray, NSString, QYAccountProtectionHeaderView, UIButton, UITableView, UIView;

@interface QYAccountProtectionViewController : QYCommonViewController <UITableViewDelegate, UITableViewDataSource, IQYDataLoadManagerDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    _Bool _isManaging;
    _Bool _openProtect;
    NSDictionary *_loginSuccessData;
    UITableView *_accountProtectionTableView;
    QYAccountProtectionHeaderView *_accountProtectionHeaderView;
    UIButton *_lockButton;
    UIButton *_moreButton;
    IQYGetOnlineDeviceManager *_getOnlineDeviceManager;
    IQYCloseDeviceProtectManager *_closeDeviceProtectManager;
    IQYSetSafeDeviceManager *_setSafeDeviceManager;
    IQYOnlineDeviceInfo *_onlineDeviceInfo;
    NSMutableArray *_deviceLockList;
    long long _maxSafeNum;
    UIView *_lockBtnBgView;
}

@property(retain, nonatomic) UIView *lockBtnBgView; // @synthesize lockBtnBgView=_lockBtnBgView;
@property(nonatomic) long long maxSafeNum; // @synthesize maxSafeNum=_maxSafeNum;
@property(nonatomic) _Bool openProtect; // @synthesize openProtect=_openProtect;
@property(retain, nonatomic) NSMutableArray *deviceLockList; // @synthesize deviceLockList=_deviceLockList;
@property(nonatomic) _Bool isManaging; // @synthesize isManaging=_isManaging;
@property(retain, nonatomic) IQYOnlineDeviceInfo *onlineDeviceInfo; // @synthesize onlineDeviceInfo=_onlineDeviceInfo;
@property(retain, nonatomic) IQYSetSafeDeviceManager *setSafeDeviceManager; // @synthesize setSafeDeviceManager=_setSafeDeviceManager;
@property(retain, nonatomic) IQYCloseDeviceProtectManager *closeDeviceProtectManager; // @synthesize closeDeviceProtectManager=_closeDeviceProtectManager;
@property(retain, nonatomic) IQYGetOnlineDeviceManager *getOnlineDeviceManager; // @synthesize getOnlineDeviceManager=_getOnlineDeviceManager;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *lockButton; // @synthesize lockButton=_lockButton;
@property(retain, nonatomic) QYAccountProtectionHeaderView *accountProtectionHeaderView; // @synthesize accountProtectionHeaderView=_accountProtectionHeaderView;
@property(retain, nonatomic) UITableView *accountProtectionTableView; // @synthesize accountProtectionTableView=_accountProtectionTableView;
@property(retain, nonatomic) NSDictionary *loginSuccessData; // @synthesize loginSuccessData=_loginSuccessData;
- (void).cxx_destruct;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)moreButtonClick:(id)arg1;
- (void)lockButtonClick:(id)arg1;
- (void)toBack;
- (void)clean;
- (void)retryRequest;
- (_Bool)__currentDeviceIsMasterDevice;
- (_Bool)__isMasterDeviceOrSafeDevice;
- (id)__masterDeviceId;
- (_Bool)__hasSetMasterDevice;
- (void)userLoginSuccessed:(id)arg1;
- (void)__requestSetSafeDeviceManagerWithDeviceList:(id)arg1;
- (void)__requestCloseDeviceProtectManager;
- (void)__requestGetOnlineDeviceManager;
- (void)__hideLockButton;
- (void)__showLockButton;
- (void)__generateActionSheet;
- (void)__removeLayout;
- (void)__generateLayout;
- (void)didReceiveMemoryWarning;
- (void)hideActivity;
- (void)showActivity;
- (void)qyCommonViewAppear;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

