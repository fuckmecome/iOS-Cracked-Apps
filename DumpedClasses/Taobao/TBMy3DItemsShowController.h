//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMy3DBaseViewController.h"

@class NSMutableArray, TBMy3DItemAssmblyDO;

@interface TBMy3DItemsShowController : TBMy3DBaseViewController
{
    int pageIndex;
    _Bool hasMore;
    TBMy3DItemAssmblyDO *_itemsData;
    NSMutableArray *_currentPageItems;
    NSMutableArray *_allItems;
}

@property(retain, nonatomic) NSMutableArray *allItems; // @synthesize allItems=_allItems;
@property(retain, nonatomic) NSMutableArray *currentPageItems; // @synthesize currentPageItems=_currentPageItems;
@property(retain, nonatomic) TBMy3DItemAssmblyDO *itemsData; // @synthesize itemsData=_itemsData;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)downloadItems:(id)arg1;
- (void)request3DItems;
- (void)viewDidLoad;

@end

