//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SearchDefaultViewTitleCell : UITableViewCell
{
    UILabel *titleLbl;
    long long _cellType;
    CDUnknownBlockType _clickClearBtnBlk;
}

@property(copy, nonatomic) CDUnknownBlockType clickClearBtnBlk; // @synthesize clickClearBtnBlk=_clickClearBtnBlk;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)clickClearBtn:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

