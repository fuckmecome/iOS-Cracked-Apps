//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MomYearAndMonthPicker, UIButton, UIDatePicker;

@interface TMBabyDatePicker : UIView
{
    UIView *_parentView;
    UIView *_datePicker;
    UIView *_sheet;
    UIButton *_closeBtn;
    UIDatePicker *_uiDatepicker;
    MomYearAndMonthPicker *_yearAndMonthPicker;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MomYearAndMonthPicker *yearAndMonthPicker; // @synthesize yearAndMonthPicker=_yearAndMonthPicker;
@property(retain, nonatomic) UIDatePicker *uiDatepicker; // @synthesize uiDatepicker=_uiDatepicker;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIView *sheet; // @synthesize sheet=_sheet;
@property(nonatomic) __weak UIView *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)setThemeColor:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)show;
- (void)setMaxDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)dismiss;
- (void)addTarget:(id)arg1 onCloseAction:(SEL)arg2;
- (void)initViewWithMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withMode:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

