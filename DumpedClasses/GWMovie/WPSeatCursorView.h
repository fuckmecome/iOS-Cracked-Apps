//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WPSeatCursorView : UIView
{
    NSArray *_cursorDataArray;
}

@property(retain, nonatomic) NSArray *cursorDataArray; // @synthesize cursorDataArray=_cursorDataArray;
- (void).cxx_destruct;
- (void)updateFrame:(struct CGRect)arg1 withCursorData:(id)arg2 inset:(double)arg3 itemHeight:(double)arg4 itemOffset:(double)arg5;
- (void)reloadByCursorData:(id)arg1;

@end

