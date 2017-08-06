//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGCBaseTableViewCell.h"

@class UIImageView, UILabel, UISwitch;

@interface DGPRouteOfoCell : DGCBaseTableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UISwitch *_switchButton;
}

@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configCell;
- (void)switchButtonChangedAction:(id)arg1;
- (void)configConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
