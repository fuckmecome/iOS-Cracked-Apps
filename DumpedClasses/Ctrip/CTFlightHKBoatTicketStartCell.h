//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CTFlightHKViewModel, NSMutableArray, NSString, UICollectionView;

@interface CTFlightHKBoatTicketStartCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *curCollectionView;
    double itemWidth;
    NSMutableArray *dataSource;
    CDUnknownBlockType startBlock;
    long long lastSelectIndex;
    _Bool _isDepart;
    CTFlightHKViewModel *_viewModel;
}

+ (double)getHeightForFlightHKBoatTicketStartCell:(id)arg1;
+ (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(retain, nonatomic) CTFlightHKViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isDepart; // @synthesize isDepart=_isDepart;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)createGeneralButton:(id)arg1;
- (void)updateForSelectedSelected:(_Bool)arg1:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupCollectionView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)selectStartFinish:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
