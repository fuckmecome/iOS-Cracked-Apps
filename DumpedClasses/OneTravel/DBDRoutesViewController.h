//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DBDRouteDataManager, DCUIButton, NSArray, NSString, UILabel, UITableView, UIView;

@interface DBDRoutesViewController : DCBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _edit;
    UILabel *_footerLab;
    UIView *_tableHeadView;
    UIView *_tableFootView;
    UITableView *_tableView;
    DCUIButton *_bottomButton;
    DBDRouteDataManager *_dataManager;
    NSString *_source;
    NSArray *_delList;
}

+ (void)load;
@property(copy, nonatomic) NSArray *delList; // @synthesize delList=_delList;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) DBDRouteDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) DCUIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableFootView; // @synthesize tableFootView=_tableFootView;
@property(retain, nonatomic) UIView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(retain, nonatomic) UILabel *footerLab; // @synthesize footerLab=_footerLab;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *routeList;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)showPushSetting:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic, getter=isEditing) _Bool edit;
- (void)setupRouteList;
- (void)requestDeleteRouteList:(id)arg1;
- (void)requestRoutesList;
- (void)delRouteActionWithModel:(id)arg1;
- (void)delRoutesAction;
- (void)addNewRouteAction;
- (void)backButtonClicked:(id)arg1;
- (void)editAction;
- (void)cancelEditAction;
- (void)update:(id)arg1;
- (void)removeNotification;
- (void)registerNotification;
- (id)delItemIndexs;
- (void)_setupNavigationBarItem;
- (void)_setupTitle;
- (void)_setupSubviews;
- (void)_setup;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

