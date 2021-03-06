//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseTableRefreshViewController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UISearchBar, UITableView, XYEmptyPlaceholderView, XYPHRefreshBaseDataSource;

@interface XYPHPostNoteTagHashViewContoller : XYPHBaseTableRefreshViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    XYPHRefreshBaseDataSource *_dataSource;
    id <XYPHPostNoteTagHashViewContollerDelegate> _delegate;
    long long _maxTopicCount;
    long long _topicCount;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    XYEmptyPlaceholderView *_emptyPlaceholderView;
}

@property(retain, nonatomic) XYEmptyPlaceholderView *emptyPlaceholderView; // @synthesize emptyPlaceholderView=_emptyPlaceholderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) long long topicCount; // @synthesize topicCount=_topicCount;
@property(nonatomic) long long maxTopicCount; // @synthesize maxTopicCount=_maxTopicCount;
@property(nonatomic) __weak id <XYPHPostNoteTagHashViewContollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (void)finishPullToRefresh:(id)arg1;
- (id)emptyDataView;
- (Class)getCellByObject:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)cancelBarButtonTouchUpInside:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dataSource;
- (void)setupTableView;
- (void)setupNavigationBar;
- (void)setup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

