//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQVIPGCDTimerManager : NSObject
{
    NSMutableDictionary *_timerContainer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *timerContainer; // @synthesize timerContainer=_timerContainer;
- (void).cxx_destruct;
- (void)cancelTimerWithName:(id)arg1;
- (void)scheduledDispatchTimerWithName:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 repeats:(_Bool)arg4 action:(CDUnknownBlockType)arg5;

@end

