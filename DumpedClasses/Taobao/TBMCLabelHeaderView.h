//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface TBMCLabelHeaderView : UIView
{
    NSArray *_itemList;
    NSMutableArray *_itemViewList;
}

@property(retain, nonatomic) NSMutableArray *itemViewList; // @synthesize itemViewList=_itemViewList;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)setCurrentItemByIndex:(long long)arg1;
- (void)layoutToItem;
- (id)initWithItemList:(id)arg1;

@end

