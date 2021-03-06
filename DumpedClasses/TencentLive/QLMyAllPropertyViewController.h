//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"

@class NSArray, NSString, QLJCEPropertyItemData, QLPropertyMineModel;

@interface QLMyAllPropertyViewController : QLBaseTableViewController <P_QLDragToRefresh>
{
    NSArray *_myJceRropetyList;
    NSArray *_arrayForCellID;
    QLPropertyMineModel *_propertyMineModel;
    QLJCEPropertyItemData *_diamondItem;
    QLJCEPropertyItemData *_coinItem;
    QLJCEPropertyItemData *_ticketItem;
}

@property(retain, nonatomic) QLJCEPropertyItemData *ticketItem; // @synthesize ticketItem=_ticketItem;
@property(retain, nonatomic) QLJCEPropertyItemData *coinItem; // @synthesize coinItem=_coinItem;
@property(retain, nonatomic) QLJCEPropertyItemData *diamondItem; // @synthesize diamondItem=_diamondItem;
@property(retain, nonatomic) QLPropertyMineModel *propertyMineModel; // @synthesize propertyMineModel=_propertyMineModel;
@property(retain, nonatomic) NSArray *arrayForCellID; // @synthesize arrayForCellID=_arrayForCellID;
@property(retain, nonatomic) NSArray *myJceRropetyList; // @synthesize myJceRropetyList=_myJceRropetyList;
- (void).cxx_destruct;
- (void)dealWithResponse;
- (void)requestModelDidStartLoad:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dragReload:(_Bool)arg1;
- (id)dragRefreshView;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

