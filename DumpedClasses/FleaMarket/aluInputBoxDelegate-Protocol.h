//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextFieldDelegate.h"

@class aluInputBox;

@protocol aluInputBoxDelegate <UITextFieldDelegate>

@optional
@property(nonatomic) _Bool needDropDownList;
- (void)aluIputBoxRightAccessoryClicked:(aluInputBox *)arg1;
- (void)aluIputBoxTextInputDidChange:(aluInputBox *)arg1;
- (void)aluInputBoxTextDidEnd:(aluInputBox *)arg1;
- (void)aluInputBoxTextDidBegin:(aluInputBox *)arg1;
@end

