//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, XYPHNoteDetailMentionPOICellAdapter, XYPHStoreEventSaleBannerGoodsCellAdapter;

@interface XYPHNoteDetailMentionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_goodsArray;
    NSArray *_locationArray;
    NSMutableArray *_allArray;
    id <XYPHNoteCellDelegate> _delegate;
    UICollectionView *_mentionGoodsCollectionView;
    XYPHStoreEventSaleBannerGoodsCellAdapter *_goodsAdapter;
    XYPHNoteDetailMentionPOICellAdapter *_poiAdapter;
}

@property(retain, nonatomic) XYPHNoteDetailMentionPOICellAdapter *poiAdapter; // @synthesize poiAdapter=_poiAdapter;
@property(retain, nonatomic) XYPHStoreEventSaleBannerGoodsCellAdapter *goodsAdapter; // @synthesize goodsAdapter=_goodsAdapter;
@property(retain, nonatomic) UICollectionView *mentionGoodsCollectionView; // @synthesize mentionGoodsCollectionView=_mentionGoodsCollectionView;
@property(nonatomic) id <XYPHNoteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *allArray; // @synthesize allArray=_allArray;
@property(retain, nonatomic) NSArray *locationArray; // @synthesize locationArray=_locationArray;
@property(retain, nonatomic) NSArray *goodsArray; // @synthesize goodsArray=_goodsArray;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
