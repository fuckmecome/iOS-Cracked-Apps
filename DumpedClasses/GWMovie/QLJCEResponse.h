//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLASIURLResponse-Protocol.h"

@class JceObject, NSData, NSMutableDictionary, NSString, QLJCEProtocolPackage, QLJCEResponseCommand, QLQmfHeaderPackage;

@interface QLJCEResponse : NSObject <QLASIURLResponse>
{
    _Bool _responseStatus;
    JceObject *_requestJCEObject;
    NSData *_responseJCEData;
    NSString *_responseJCEName;
    id _responseJCEObject;
    QLJCEProtocolPackage *_jcePackage;
    QLQmfHeaderPackage *_qmfHeaderPackage;
    NSData *_requestPackageData;
    QLJCEResponseCommand *_responseCmd;
    NSMutableDictionary *_reportLogInfos;
    NSString *_requestHost;
}

+ (id)responseJCEObject:(id)arg1 requestJCECmd:(long long)arg2;
@property(copy) NSString *requestHost; // @synthesize requestHost=_requestHost;
@property(retain) NSMutableDictionary *reportLogInfos; // @synthesize reportLogInfos=_reportLogInfos;
@property(retain, nonatomic) QLJCEResponseCommand *responseCmd; // @synthesize responseCmd=_responseCmd;
@property(retain, nonatomic) NSData *requestPackageData; // @synthesize requestPackageData=_requestPackageData;
@property(retain, nonatomic) QLQmfHeaderPackage *qmfHeaderPackage; // @synthesize qmfHeaderPackage=_qmfHeaderPackage;
@property(retain, nonatomic) QLJCEProtocolPackage *jcePackage; // @synthesize jcePackage=_jcePackage;
@property(nonatomic) _Bool responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) id responseJCEObject; // @synthesize responseJCEObject=_responseJCEObject;
@property(retain, nonatomic) NSString *responseJCEName; // @synthesize responseJCEName=_responseJCEName;
@property(retain, nonatomic) NSData *responseJCEData; // @synthesize responseJCEData=_responseJCEData;
@property(retain, nonatomic) JceObject *requestJCEObject; // @synthesize requestJCEObject=_requestJCEObject;
- (id)requestProcessErrorResponse:(id)arg1;
- (id)requestProcessResponse:(id)arg1;
- (id)initWithJCEObject:(id)arg1 requestJCECmd:(long long)arg2;
- (long long)conversionASIRequestErrorCode:(long long)arg1;
- (void)otherErrorWillReplaseErrorCode:(long long)arg1;
- (void)omfErrorWillReplaseErrorCode:(long long)arg1;
- (void)reportEventServiceError:(int)arg1;
- (void)reportEventJceRequest;
- (void)gleanRequestInfomation:(id)arg1;
- (void)handleReplaseJceReportInfosByBaseJCELog:(id)arg1 forKey:(id)arg2;
- (void)handleReplaseJceReportInfosByResponseLog:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

