//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MAAnimationTask : NSObject
{
    _Bool _isNeedReturnToOrigin;
    _Bool _isComplete;
    double _duration;
    double _elapse;
    id _fromValue;
    id _toValue;
    NSString *_keyPath;
    CDUnknownBlockType _animationOver;
    id _userData;
}

@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(copy, nonatomic) CDUnknownBlockType animationOver; // @synthesize animationOver=_animationOver;
@property(nonatomic) _Bool isNeedReturnToOrigin; // @synthesize isNeedReturnToOrigin=_isNeedReturnToOrigin;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(nonatomic) double elapse; // @synthesize elapse=_elapse;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)init;
- (id)doAnimationTaskWithDuration:(double)arg1 frameInterval:(double)arg2;

@end

