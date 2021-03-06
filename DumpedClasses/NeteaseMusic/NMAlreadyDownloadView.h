//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMLogView.h"

#import "NMAlreadyDownloadViewProtocol.h"

@class NSString, UITableView;

@interface NMAlreadyDownloadView : NMLogView <NMAlreadyDownloadViewProtocol>
{
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)hideView;
- (void)showView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

