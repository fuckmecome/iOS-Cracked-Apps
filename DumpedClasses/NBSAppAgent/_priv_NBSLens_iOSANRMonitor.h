//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _priv_NBSLens_iOSANRMonitor : NSObject
{
    struct __CFRunLoopObserver *observer;
    struct dispatch_semaphore_s *semaphore;
    unsigned long long activity;
}

+ (id)shareInstance;
- (void)startMonitor;
- (void)stopMonitor;

@end

