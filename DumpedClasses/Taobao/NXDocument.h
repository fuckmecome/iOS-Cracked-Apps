//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXDocumentProtocol.h"

@class NXJSContext;

@interface NXDocument : NSObject <NXDocumentProtocol>
{
    NXJSContext *_context;
}

@property(nonatomic) __weak NXJSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)appMonitorEnd:(id)arg1;
- (void)appMonitorStart:(id)arg1;
- (void)addEventListener:(id)arg1 handler:(id)arg2 reset:(_Bool)arg3;

@end

