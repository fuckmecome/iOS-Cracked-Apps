//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TXTBGridMenuViewDelegate.h"

@class NSArray, NSString, TXFlowListView, TXQueryFlowCardModel, TXTBGridMenuView;

@interface TXFlowView : UIView <TXTBGridMenuViewDelegate>
{
    _Bool _themeSkinIsValid;
    NSArray *_flowPackageList;
    TXTBGridMenuView *_flowGridView;
    TXFlowListView *_flowListView;
    TXQueryFlowCardModel *_flowCardModel;
    long long _selectedFlowPackageIndex;
    NSArray *_defaultFlowPackageList;
    NSArray *_chaoRenFlowList;
    long long _status;
    NSString *_phoneNum;
}

+ (id)PayBtnClicked;
+ (id)ChaoRenDetailClicked;
+ (id)GridItemClicked;
@property(nonatomic) _Bool themeSkinIsValid; // @synthesize themeSkinIsValid=_themeSkinIsValid;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *chaoRenFlowList; // @synthesize chaoRenFlowList=_chaoRenFlowList;
@property(copy, nonatomic) NSArray *defaultFlowPackageList; // @synthesize defaultFlowPackageList=_defaultFlowPackageList;
@property(nonatomic) long long selectedFlowPackageIndex; // @synthesize selectedFlowPackageIndex=_selectedFlowPackageIndex;
@property(retain, nonatomic) TXQueryFlowCardModel *flowCardModel; // @synthesize flowCardModel=_flowCardModel;
@property(retain, nonatomic) TXFlowListView *flowListView; // @synthesize flowListView=_flowListView;
@property(retain, nonatomic) TXTBGridMenuView *flowGridView; // @synthesize flowGridView=_flowGridView;
@property(retain, nonatomic) NSArray *flowPackageList; // @synthesize flowPackageList=_flowPackageList;
- (void).cxx_destruct;
- (void)handleUpUISignal_TXFlowListView:(id)arg1;
- (void)configFlowItemView:(id)arg1 gridMenuView:(id)arg2 ItemViewForRowAtIndex:(long long)arg3;
- (id)gridMenuView:(id)arg1 ItemViewForRowAtIndex:(long long)arg2;
- (unsigned long long)gridMenuViewNumberOfItems:(id)arg1;
- (id)gridItemViewWithTag:(long long)arg1;
- (id)getMainPushSpecialModel;
- (id)getMinFinalPrice:(id)arg1;
- (id)modelOfIndex:(long long)arg1;
- (id)titleOfIndex:(long long)arg1;
- (long long)itemCount;
- (double)heightOfGridView:(id)arg1;
- (void)updateUI;
- (void)setupSubviews;
- (int)defaultFlowPackageListIndexOfFace:(id)arg1;
- (void)setThemeSkin:(_Bool)arg1;
- (void)updateFlowListUI;
- (void)setFlowCardModel:(id)arg1 selectedIndex:(long long)arg2 phoneNum:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *ChaoRenDetailClicked; // @dynamic ChaoRenDetailClicked;
@property(readonly, nonatomic) NSString *GridItemClicked; // @dynamic GridItemClicked;
@property(readonly, nonatomic) NSString *PayBtnClicked; // @dynamic PayBtnClicked;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

