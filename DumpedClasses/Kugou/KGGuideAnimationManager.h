//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface KGGuideAnimationManager : NSObject
{
    NSMutableArray *_guideAnimations;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *guideAnimations; // @synthesize guideAnimations=_guideAnimations;
- (void).cxx_destruct;
- (void)animationForOffset:(double)arg1;
- (void)addAnimation:(id)arg1;
- (id)init;

@end

