//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OpenInterfaceLibrary : NSObject
{
    NSMutableDictionary *_interfaceCache;
    NSMutableDictionary *_pluginCache;
    NSString *_authCode;
    void *_router;
}

+ (id)getInstance;
+ (id)getInstance:(id)arg1;
@property void *router; // @synthesize router=_router;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSMutableDictionary *pluginCache; // @synthesize pluginCache=_pluginCache;
@property(retain, nonatomic) NSMutableDictionary *interfaceCache; // @synthesize interfaceCache=_interfaceCache;
- (void).cxx_destruct;
- (Class)getMetaClassFromInterface:(id)arg1;
- (Class)getMetaClassFromPluginName:(id)arg1;
- (id)getInterfaceRaw:(id)arg1 errorInfo:(id *)arg2;
- (_Bool)checkDependency:(Class)arg1 loadDependencyOption:(long long)arg2 errorInfo:(id *)arg3;
- (_Bool)loadPlugin:(Class)arg1 loadDependency:(_Bool)arg2 erroInfo:(id *)arg3;
- (id)translateProtocolNameToPluginName:(id)arg1;
- (id)translateProtocolName:(id)arg1;
- (id)getInterface:(id)arg1;
- (id)getInterface:(id)arg1 error:(id *)arg2;
- (id)init;

@end

