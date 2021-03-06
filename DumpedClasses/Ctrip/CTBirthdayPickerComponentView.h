//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface CTBirthdayPickerComponentView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    _Bool _scrolling;
    _Bool _infinite;
    id <CTBirthdayPickerComponentViewDelegate> _delegate;
    NSArray *_data;
    long long _rawDataItemCount;
    UITableView *_tableView;
    struct CGSize _size;
}

@property(nonatomic, getter=isInfinite) _Bool infinite; // @synthesize infinite=_infinite;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long rawDataItemCount; // @synthesize rawDataItemCount=_rawDataItemCount;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) __weak id <CTBirthdayPickerComponentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endScrolling;
- (void)forceReset;
- (void)reset;
- (_Bool)shouldReset;
- (void)scrollToNearestCellAnimated:(_Bool)arg1;
- (void)setFocus;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGPoint)nearestTargetOffsetForOffset:(struct CGPoint)arg1;
- (double)rowHeiht;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)currentSelectedData;
- (void)setCurrentSelectedData:(id)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (id)initWithSize:(struct CGSize)arg1 data:(id)arg2 isInfinite:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

