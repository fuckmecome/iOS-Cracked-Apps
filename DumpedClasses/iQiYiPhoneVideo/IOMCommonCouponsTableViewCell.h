//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;

@interface IOMCommonCouponsTableViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;
    CDUnknownBlockType _handleCouponsClicked;
    UIButton *_bgBtn;
    UILabel *_priceLabel;
    UILabel *_tipsLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_timeLabel;
    UIView *_leftSepViewTop;
    UIView *_leftSepViewBottom;
    UIView *_middleSepViewTop;
    UIView *_middleSepViewBottom;
    UIView *_middleSepView;
}

+ (double)cellViewHeight;
@property(retain, nonatomic) UIView *middleSepView; // @synthesize middleSepView=_middleSepView;
@property(retain, nonatomic) UIView *middleSepViewBottom; // @synthesize middleSepViewBottom=_middleSepViewBottom;
@property(retain, nonatomic) UIView *middleSepViewTop; // @synthesize middleSepViewTop=_middleSepViewTop;
@property(retain, nonatomic) UIView *leftSepViewBottom; // @synthesize leftSepViewBottom=_leftSepViewBottom;
@property(retain, nonatomic) UIView *leftSepViewTop; // @synthesize leftSepViewTop=_leftSepViewTop;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIButton *bgBtn; // @synthesize bgBtn=_bgBtn;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(copy, nonatomic) CDUnknownBlockType handleCouponsClicked; // @synthesize handleCouponsClicked=_handleCouponsClicked;
- (void).cxx_destruct;
- (void)displayItem:(id)arg1;
- (void)clickedBtn;
- (void)__drawSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

