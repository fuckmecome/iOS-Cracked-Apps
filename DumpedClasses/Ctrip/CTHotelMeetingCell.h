//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UILabel;

@interface CTHotelMeetingCell : CTHotelBaseCell
{
    UILabel *_firstDiscountNameLabel;
    UILabel *_secondDiscountNameLabel;
    UILabel *_firstDiscountPriceLabel;
    UILabel *_secondDiscountPriceLabel;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *secondDiscountPriceLabel; // @synthesize secondDiscountPriceLabel=_secondDiscountPriceLabel;
@property(retain, nonatomic) UILabel *firstDiscountPriceLabel; // @synthesize firstDiscountPriceLabel=_firstDiscountPriceLabel;
@property(retain, nonatomic) UILabel *secondDiscountNameLabel; // @synthesize secondDiscountNameLabel=_secondDiscountNameLabel;
@property(retain, nonatomic) UILabel *firstDiscountNameLabel; // @synthesize firstDiscountNameLabel=_firstDiscountNameLabel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (id)buildLabelView:(id)arg1 fontsize:(double)arg2;
- (void)initView;

@end

