//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TB3DBizHelper : NSObject
{
}

+ (void)commitAppmonitorWithModuleName:(id)arg1 monitorPoint:(id)arg2 dimensionSet:(id)arg3 measureSet:(id)arg4 dimensionValue:(id)arg5 measureValue:(id)arg6;
+ (void)registerAppmonitorWithModuleName:(id)arg1 monitorPoint:(id)arg2 dimensionSet:(id)arg3 measureSet:(id)arg4;
+ (void)commitExposureWithPageName:(id)arg1 eventName:(id)arg2 args:(id)arg3;
+ (float)scaleHeight:(float)arg1;
+ (float)scaleWidth:(float)arg1;
+ (void)downloadWithUrl:(id)arg1 destination:(id)arg2 md5:(id)arg3 fileSize:(int)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)dictionaryWithContentsOfConfigFile:(id)arg1;
+ (id)dictionaryWithConfigData:(id)arg1;

@end

