//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class KGTableView, NSArray, NSString;

@interface KGConcertSingerViewController : KGViewController <KGTableViewDelegate, UITableViewDataSource>
{
    NSArray *_performers;
    NSString *_singerName;
    KGTableView *_concertTableview;
    NSArray *_concertList;
}

@property(retain, nonatomic) NSArray *concertList; // @synthesize concertList=_concertList;
@property(retain, nonatomic) KGTableView *concertTableview; // @synthesize concertTableview=_concertTableview;
@property(retain) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSArray *performers; // @synthesize performers=_performers;
- (void).cxx_destruct;
- (void)goSingerView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reConnectEvent;
- (void)loadData;
- (void)showEmptyView;
- (void)initContentView;
- (void)initTitle;
- (void)KGUsingControllerState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
