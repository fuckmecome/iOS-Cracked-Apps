//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKObserver.h"

@class NSString;

@interface KKWithObserver : KKObserver
{
    NSString *_keyPath;
    KKObserver *_observer;
}

@property(nonatomic) __weak KKObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)setObserver:(id)arg1 keyPath:(id)arg2;
- (void)_onObservers;
- (void)_clearObservers;
- (void)dealloc;
- (id)init;

@end

