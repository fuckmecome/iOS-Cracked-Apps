//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMEnginx : NSObject
{
    _Bool _lastConfigSucceed;
}

+ (id)defaultConfigString;
+ (id)rewriteURL:(id)arg1;
+ (void)loadConfigIfNeeded;
+ (_Bool)isEnginxEnabled;
+ (id)sharedEnginx;
+ (void)initialize;
@property(nonatomic) _Bool lastConfigSucceed; // @synthesize lastConfigSucceed=_lastConfigSucceed;

@end

