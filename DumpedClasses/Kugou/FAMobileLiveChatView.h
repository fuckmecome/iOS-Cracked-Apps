//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FAMobileLiveChatBaseCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSLock, NSMutableArray, NSString, NSTimer, UIButton, UITableView, UITapGestureRecognizer;

@interface FAMobileLiveChatView : UIView <UITableViewDataSource, UITableViewDelegate, FAMobileLiveChatBaseCellDelegate>
{
    _Bool _isBottom;
    id <FAMobileLiveChatViewDelegate> _delegate;
    long long _chatViewType;
    UITableView *_tableView;
    NSMutableArray *_msgArray;
    NSLock *_cacheLock;
    UIView *_bgView;
    UIButton *_chatArrowBtn;
    NSTimer *_alphaTimer;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NSTimer *alphaTimer; // @synthesize alphaTimer=_alphaTimer;
@property(nonatomic) _Bool isBottom; // @synthesize isBottom=_isBottom;
@property(retain, nonatomic) UIButton *chatArrowBtn; // @synthesize chatArrowBtn=_chatArrowBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long chatViewType; // @synthesize chatViewType=_chatViewType;
@property(nonatomic) __weak id <FAMobileLiveChatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteMsgWithIndexPath:(id)arg1;
- (void)hiddenChatViewAlpha;
- (void)showChatViewAlpha;
- (void)removeAlphaTimer;
- (void)resetAlphaTimer;
- (void)hiddenChatView;
- (void)showChatView;
- (void)reloadChatView;
- (void)mobileLiveChatViewCell:(id)arg1 willOpenUrl:(id)arg2;
- (void)mobileLiveChatViewCell:(id)arg1 userModel:(id)arg2;
- (void)mobileLiveChatViewCell:(id)arg1 selectUserId:(id)arg2;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)gameNoticeCellMsg:(id)arg1;
- (id)buyRichLevelFinishCellMsg:(id)arg1;
- (id)systemCellMsg:(id)arg1;
- (id)chatRemindCellMsg:(id)arg1;
- (id)giftCellMsg:(id)arg1;
- (id)chatCellMsg:(id)arg1;
- (id)enterRoomCellMsg:(id)arg1;
- (id)formatMsg:(id)arg1;
- (_Bool)checkIsBottom;
- (void)dealIsScrollToBottom:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToBottom;
- (void)updateTableCell;
- (void)loadChatMsg:(id)arg1;
- (void)updateContentViewFrame;
- (void)chatArrowBtnClick:(id)arg1;
- (void)configSubViews;
- (void)followStateChangeCallBack;
- (void)addTapGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
