//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString;

@interface CTHotelStyleTextFieldView : UIView <UITextFieldDelegate>
{
    NSMutableArray *_items;
    long long _count;
    id <CTHotelStyleTextFieldViewDelegate> _delegate;
    unsigned long long _style;
    CDUnknownBlockType _editBlock;
    NSMutableArray *_textFieldArray;
}

+ (double)getHeight:(long long)arg1 style:(unsigned long long)arg2;
+ (id)initWithFrame:(struct CGRect)arg1 sytle:(unsigned long long)arg2 count:(long long)arg3;
@property(retain, nonatomic) NSMutableArray *textFieldArray; // @synthesize textFieldArray=_textFieldArray;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <CTHotelStyleTextFieldViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)resignTextField:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldEndChange:(id)arg1 bCleared:(_Bool)arg2;
- (void)reload;
- (void)fillItemsToView;
- (double)addItmeView:(double)arg1 tag:(long long)arg2 isFirst:(_Bool)arg3;
- (void)dealloc;
- (id)initStyleViewWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 count:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

