//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class NSArray, NSMutableArray;

@interface GMSMultiTouchGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray *_touches;
    int _maximumTouches;
}

@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (void)touchUp:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 maximumTouches:(int)arg3;

@end

