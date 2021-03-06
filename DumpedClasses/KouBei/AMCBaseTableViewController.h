//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPassBaseViewController.h"

#import "AMCDataEngineDataSource-Protocol.h"
#import "SVTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMCDataEngine, APTableView, NSString;

@interface AMCBaseTableViewController : APPassBaseViewController <UITableViewDataSource, UITableViewDelegate, AMCDataEngineDataSource, SVTableViewCellDelegate>
{
    APTableView *_tableView;
    AMCDataEngine *_dataEngine;
}

@property(retain, nonatomic) AMCDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)back;
- (_Bool)swipeableTableViewCell:(id)arg1 canSwipeToState:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)createSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

