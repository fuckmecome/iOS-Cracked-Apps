//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (AUUtility)
- (void)au_execBlock;
- (void)au_invalidateTimer;
- (id)au_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)au_timerHelper;
- (void)au_removeObserverForKeyPath:(id)arg1;
- (void)au_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)au_helper;
@end

