//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLBaseViewController.h"

#import "HLDetailBottomViewDelegate.h"

@class HLColumnFeedCellModel, HLDetailBottomView, HLFeedInteractModel, NSString;

@interface HLDetailViewController : HLBaseViewController <HLDetailBottomViewDelegate>
{
    _Bool _hideBottomView;
    HLDetailBottomView *_bottomView;
    NSString *_feedId;
    HLColumnFeedCellModel *_cellModel;
    long long _bottomViewStyle;
    Class _commentService;
    HLFeedInteractModel *_interactModel;
}

@property(retain, nonatomic) HLFeedInteractModel *interactModel; // @synthesize interactModel=_interactModel;
@property(retain, nonatomic) Class commentService; // @synthesize commentService=_commentService;
@property(nonatomic) _Bool hideBottomView; // @synthesize hideBottomView=_hideBottomView;
@property(nonatomic) long long bottomViewStyle; // @synthesize bottomViewStyle=_bottomViewStyle;
@property(retain, nonatomic) HLColumnFeedCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) HLDetailBottomView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)commitComment:(id)arg1;
- (void)didViewShareAction:(id)arg1;
- (void)collectFeedOrNot:(_Bool)arg1 updateView:(id)arg2;
- (void)appreciateFeedOrNot:(_Bool)arg1 updateView:(id)arg2;
- (void)didZanView:(id)arg1 appreciate:(id)arg2;
- (void)didView:(id)arg1 favour:(_Bool)arg2;
- (id)getFeedId;
- (void)didViewCommentIconAction:(id)arg1;
- (void)didViewCommentInputAction:(id)arg1;
- (void)showShareMenu;
- (void)updateBottomViewData:(id)arg1;
- (void)queryIsCollectedData:(id)arg1 interact:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)queryIsCollectedData:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryInteractData:(id)arg1;
- (void)loadFeedDetail:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)layoutBottomBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

