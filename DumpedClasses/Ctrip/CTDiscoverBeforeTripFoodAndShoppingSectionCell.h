//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface CTDiscoverBeforeTripFoodAndShoppingSectionCell : UICollectionViewCell
{
    NSString *foodUrl;
    NSString *shoppingUrl;
    int countryID;
    UILabel *_foodMainLabel;
    UILabel *_foodSubLabel;
    UILabel *_mainShoppingLabel;
    UILabel *_subShoppingLabel;
    NSLayoutConstraint *_mainTitleToTopConstraint;
    NSLayoutConstraint *_subShoppingLabelWidthConstraint;
    NSLayoutConstraint *_foodMainTitleToTopConstraint;
    NSLayoutConstraint *_foodSubShoppingLabelWidthConstraint;
    NSLayoutConstraint *_foodBottomConstraint;
    NSLayoutConstraint *_shopBottomConstraint;
}

+ (double)viewHeight;
@property(retain, nonatomic) NSLayoutConstraint *shopBottomConstraint; // @synthesize shopBottomConstraint=_shopBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foodBottomConstraint; // @synthesize foodBottomConstraint=_foodBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foodSubShoppingLabelWidthConstraint; // @synthesize foodSubShoppingLabelWidthConstraint=_foodSubShoppingLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foodMainTitleToTopConstraint; // @synthesize foodMainTitleToTopConstraint=_foodMainTitleToTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subShoppingLabelWidthConstraint; // @synthesize subShoppingLabelWidthConstraint=_subShoppingLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainTitleToTopConstraint; // @synthesize mainTitleToTopConstraint=_mainTitleToTopConstraint;
@property(retain, nonatomic) UILabel *subShoppingLabel; // @synthesize subShoppingLabel=_subShoppingLabel;
@property(retain, nonatomic) UILabel *mainShoppingLabel; // @synthesize mainShoppingLabel=_mainShoppingLabel;
@property(retain, nonatomic) UILabel *foodSubLabel; // @synthesize foodSubLabel=_foodSubLabel;
@property(retain, nonatomic) UILabel *foodMainLabel; // @synthesize foodMainLabel=_foodMainLabel;
- (void).cxx_destruct;
- (void)clickOnShoppingButton:(id)arg1;
- (void)clickOnDeliciousFoodButton:(id)arg1;
- (void)countryIDForShopping:(int)arg1;
- (void)resetUrl:(id)arg1 foodurl:(id)arg2 returnCash:(id)arg3 foodSubTitle:(id)arg4;
- (void)updateConstraintsBasedOnScreen:(id)arg1 layout:(id)arg2 bottomLayout:(id)arg3;
- (void)awakeFromNib;

@end
