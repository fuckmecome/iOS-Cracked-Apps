//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIKeyboardListener : NSObject
{
    _Bool _visible;
    double _keyBoardHeight;
}

+ (id)listener;
- (void)dealloc;
- (_Bool)isVisible;
- (double)keyBoardHeight;
- (void)noticeHideKeyboard:(id)arg1;
- (void)noticeShowKeyboard:(id)arg1;
- (id)init;

@end

