//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, NSString, UITextField;

@interface KTVPhoneNumberTextField : UIView
{
    UITextField *_textField;
    KGThemeLabel *_titlelb;
    NSString *_labelName;
    NSString *_placeHolderName;
}

@property(copy, nonatomic) NSString *placeHolderName; // @synthesize placeHolderName=_placeHolderName;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) KGThemeLabel *titlelb; // @synthesize titlelb=_titlelb;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setupContentViews;
- (id)initWithLabelName:(id)arg1 placeholderName:(id)arg2;

@end

