//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"

@class NSString, QLVRssSubscribeListDataModel;

@interface QLVRssSubscribeViewController : QLBaseTableViewController <P_QLDragToRefresh>
{
    NSString *_navBarTitle;
    NSString *_type;
    NSString *_dataKey;
    QLVRssSubscribeListDataModel *_dataModel;
}

@property(retain, nonatomic) QLVRssSubscribeListDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showEmpty:(_Bool)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (_Bool)isRightModel:(id)arg1;
- (id)dragRefreshView;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)searchVideosClicked:(id)arg1;
- (void)loadData:(int)arg1;
- (void)retryDown:(id)arg1;
- (_Bool)navigationBarHidden;
- (id)pageChineseName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithType:(id)arg1 dataKey:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

