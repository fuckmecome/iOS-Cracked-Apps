//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSImage.h"

@class CADisplayLink, UIImage, UIImage<TNodeAnimatedImageProtocol>;

@interface JSAnimatedImage : JSImage
{
    _Bool _shouldAnimate;
    _Bool _needsDisplayWhenImageBecomesAvailable;
    UIImage<TNodeAnimatedImageProtocol> *_animatedImage;
    UIImage *_currentFrame;
    unsigned long long _currentFrameIndex;
    unsigned long long _loopCountdown;
    double _accumulator;
    CADisplayLink *_displayLink;
}

+ (void)initialize;
@property(nonatomic) _Bool needsDisplayWhenImageBecomesAvailable; // @synthesize needsDisplayWhenImageBecomesAvailable=_needsDisplayWhenImageBecomesAvailable;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double accumulator; // @synthesize accumulator=_accumulator;
@property(nonatomic) unsigned long long loopCountdown; // @synthesize loopCountdown=_loopCountdown;
@property(readonly, nonatomic) unsigned long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(readonly, nonatomic) UIImage *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(retain, nonatomic) UIImage<TNodeAnimatedImageProtocol> *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)displayLayer:(id)arg1;
- (void)displayDidRefresh:(id)arg1;
- (void)updateShouldAnimate;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setImage:(id)arg1;
- (id)image;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)dealloc;

@end

