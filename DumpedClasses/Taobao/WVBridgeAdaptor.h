//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WVBridgeAdaptor : NSObject
{
    NSArray *_adaptors;
}

+ (id)findClassName:(id)arg1 withHandlerName:(id)arg2;
+ (void)registerBridgeAdaptor:(id)arg1;
+ (id)sharedInstance;
@property(retain) NSArray *adaptors; // @synthesize adaptors=_adaptors;
- (void).cxx_destruct;

@end

