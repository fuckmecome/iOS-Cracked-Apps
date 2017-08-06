//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FAUserStatusViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FAUserStatusView, NSMutableArray, NSString, UICollectionView, UIView;

@interface FADigitalAlbumListController : FAViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FAUserStatusViewDelegate>
{
    long long _userId;
    long long _kugouId;
    long long _roomId;
    UICollectionView *_collectionView;
    NSMutableArray *_dataSourceArray;
    UIView *_backView;
    long long _currentPage;
    NSMutableArray *_purchasedAlbums;
    FAUserStatusView *_noDataStatusView;
    FAUserStatusView *_errorStatusView;
}

@property(retain, nonatomic) FAUserStatusView *errorStatusView; // @synthesize errorStatusView=_errorStatusView;
@property(retain, nonatomic) FAUserStatusView *noDataStatusView; // @synthesize noDataStatusView=_noDataStatusView;
@property(retain, nonatomic) NSMutableArray *purchasedAlbums; // @synthesize purchasedAlbums=_purchasedAlbums;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)reloadStatusViewWithError:(id)arg1 isNoData:(_Bool)arg2;
- (void)showAlertIfNotEnoughCoin;
- (void)showAlbumGiftSpecialAlertWithAlbum:(id)arg1 number:(long long)arg2;
- (void)buyDigitalAlbum:(id)arg1 withCount:(long long)arg2;
- (void)handleShowBuyAlbumSheetView:(id)arg1;
- (void)showBuyAlbumSheetView:(id)arg1;
- (void)loadMoreData;
- (void)loadData;
- (void)FAUserStatusView:(id)arg1 refresh:(void *)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
