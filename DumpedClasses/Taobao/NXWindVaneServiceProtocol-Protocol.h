//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSString;

@protocol NXWindVaneServiceProtocol <JSExport>
- (void)call:(NSString *)arg1 methodName:(NSString *)arg2 data:(id)arg3 success:(JSValue *)arg4 failed:(JSValue *)arg5;

@optional
- (void)call:(NSString *)arg1 methodName:(NSString *)arg2 data:(id)arg3 success:(JSValue *)arg4 failed:(JSValue *)arg5 __JS_EXPORT_AS__call:(id)arg6;
@end

