//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLPickerView, UIView;

@protocol QLPickerViewDelegate <NSObject>
- (void)pickerView:(QLPickerView *)arg1 didSelectAtIndex:(long long)arg2;

@optional
- (void)pickerViewDidCancelButton:(QLPickerView *)arg1;
- (void)pickerView:(QLPickerView *)arg1 dismissFromSuperView:(UIView *)arg2;
@end
