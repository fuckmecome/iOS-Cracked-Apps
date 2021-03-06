//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTShapeLayerAnimation.h"

#import "IFTTTAnimatable.h"

@class NSString;

@interface IFTTTLayerStrokeEndAnimation : IFTTTShapeLayerAnimation <IFTTTAnimatable>
{
    NSString *_animationKey;
}

@property(retain, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
- (void).cxx_destruct;
- (id)strokeEndAnimation;
- (void)createBasicAnimation;
- (void)animate:(double)arg1;
- (_Bool)validStrokeEnd:(double)arg1;
- (void)addKeyframeForTime:(double)arg1 strokeEnd:(double)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)addKeyframeForTime:(double)arg1 strokeEnd:(double)arg2;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

