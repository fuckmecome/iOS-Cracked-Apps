//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANXLogManager, ANXRuntimeConfig;

@interface ANXInnerInsideService : NSObject
{
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    id <ANXService> _reportLBSService;
    id <ANXService> _service;
}

@property(retain, nonatomic) id <ANXService> service; // @synthesize service=_service;
@property(retain, nonatomic) id <ANXService> reportLBSService; // @synthesize reportLBSService=_reportLBSService;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (id)buildInsideEnv;
- (void)reportTidInfo;
- (void)reportLBSInfo;
- (void)startMonitor;
- (void)startServiceWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
