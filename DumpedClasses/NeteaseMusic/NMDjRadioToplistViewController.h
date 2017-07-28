//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NMDiscoveryToplistHeaderCellDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMScrollableTableControllerProtocol.h"

@class NMDjProgram, NMDjRadioToplistRequest, NMScrollTableController, NMScrollableTabItem, NSMutableArray, NSString;

@interface NMDjRadioToplistViewController : UITableViewController <NMHttpRequestDelegate, NMDiscoveryToplistHeaderCellDelegate, NMScrollableTableControllerProtocol>
{
    unsigned long long _type;
    NMDjRadioToplistRequest *_toplistRequest;
    _Bool _isLoading;
    NSMutableArray *_dataArray;
    NSString *_updateTime;
    NMScrollableTabItem *_scrollableItem;
    NMScrollTableController *_scrollTableController;
    id <NMDjRadioToplistViewControllerDelegate> _delegate;
    NMDjProgram *_currentProgram;
}

@property(retain, nonatomic) NMDjProgram *currentProgram; // @synthesize currentProgram=_currentProgram;
@property(nonatomic) __weak id <NMDjRadioToplistViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem=_scrollableItem;
- (void).cxx_destruct;
- (id)customClassIdString;
- (id)logTypeStr;
- (void)logDjRadioToplistClickWithId:(id)arg1;
- (void)logShowPage;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)toplistHeaderCellInfoButtonClicked:(id)arg1;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (void)navigationPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)loadDataBytype;
- (void)doLoadData;
- (void)sourceScrollToCurrentProgram;
- (void)finishLoadProgram:(_Bool)arg1;
- (void)reloadDjProgramData;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initToplistViewController:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
