//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ALBBConfig : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_systemVersion;
    unsigned long long _environment;
    unsigned long long _logLevel;
    NSMutableDictionary *_store;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
@property unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property unsigned long long environment; // @synthesize environment=_environment;
@property(copy) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1 plugin:(Class)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 plugin:(Class)arg3;
- (id)init;

@end
