//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "GWCommunityZixuDelegate-Protocol.h"
#import "GWMovieCheckLoginDelegate-Protocol.h"
#import "GWPilotAnimationViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GWGetCommentListV6Provider, GWPilotAnimationView, NSArray, NSMutableArray, NSString;
@protocol GWAppTypeDelegate;

@interface GWSubWalaListViewController : GWBaseTableViewController <UITableViewDataSource, UITableViewDelegate, GWPilotAnimationViewDelegate, GWMovieCheckLoginDelegate, GWCommunityZixuDelegate>
{
    int _listType;
    NSString *_currentTitle;
    NSArray *_doenWalaArray;
    NSString *_defaultScreenType;
    id <GWAppTypeDelegate> _relatedInfo;
    GWPilotAnimationView *_pilotView;
    GWGetCommentListV6Provider *_walaProvider;
    NSMutableArray *_walaArray;
}

@property(retain, nonatomic) NSMutableArray *walaArray; // @synthesize walaArray=_walaArray;
@property(retain, nonatomic) GWGetCommentListV6Provider *walaProvider; // @synthesize walaProvider=_walaProvider;
@property(retain, nonatomic) GWPilotAnimationView *pilotView; // @synthesize pilotView=_pilotView;
@property(retain, nonatomic) id <GWAppTypeDelegate> relatedInfo; // @synthesize relatedInfo=_relatedInfo;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *defaultScreenType; // @synthesize defaultScreenType=_defaultScreenType;
@property(retain, nonatomic) NSArray *doenWalaArray; // @synthesize doenWalaArray=_doenWalaArray;
@property(retain, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
- (void).cxx_destruct;
- (void)walaView:(id)arg1 voteHeightChanged:(double)arg2;
- (void)configWalaCellWithWala:(id)arg1 cell:(id)arg2 isForShort:(_Bool)arg3 walaShowMask:(unsigned long long)arg4;
- (void)walaViewButtonClicked:(id)arg1 walaView:(id)arg2;
- (void)commentButtonClickedWithComment:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getWalaListMincommentid;
- (double)checkCurrentWalaCount;
- (void)responedWithResponed:(id)arg1 error:(id)arg2;
- (void)startLoadWala;
- (void)showMessageIfNeed;
- (void)requestWalaListWithClear:(_Bool)arg1;
- (void)finishRefreshFromFooter;
- (void)beginRefreshFromFooter;
- (id)relatedid;
- (id)tag;
- (void)resetWalaProviderParameters;
- (void)onBackBtnClicked;
- (void)createNaviBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

