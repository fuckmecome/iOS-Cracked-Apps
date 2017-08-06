//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DISocketDataManagerDelegate.h"
#import "DISocketDataManagerIMDelegate.h"
#import "TaxiPDRelationshipDelegate.h"

@class NSString, ONETimer, TaxiPDRelationship, TaxiSocketMsgProcessor;

@interface TaxiSocketInterface : NSObject <DISocketDataManagerDelegate, DISocketDataManagerIMDelegate, TaxiPDRelationshipDelegate>
{
    _Bool _isConnected;
    id <TaxiSocketInterfaceDelegate> _delegate;
    TaxiSocketMsgProcessor *_processor;
    TaxiPDRelationship *_relationship;
    ONETimer *_passengerLocationTimer;
}

@property(retain, nonatomic) ONETimer *passengerLocationTimer; // @synthesize passengerLocationTimer=_passengerLocationTimer;
@property(retain, nonatomic) TaxiPDRelationship *relationship; // @synthesize relationship=_relationship;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) TaxiSocketMsgProcessor *processor; // @synthesize processor=_processor;
@property(nonatomic) __weak id <TaxiSocketInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reConnectSocket;
- (void)startSocketService;
- (void)clearTaxiOrderPdRelation;
- (void)checkTaxiOrderPdRelation:(id)arg1;
- (void)uploadTaxiPassengerLocationInfo:(id)arg1 pullPeer:(_Bool)arg2;
- (void)stopPollUploadTaxiLocation;
- (void)startPollUploadTaxiLocation:(id)arg1 pullPeer:(_Bool)arg2;
- (id)convertToTaxiPushMsg:(id)arg1;
- (_Bool)isCurrentProductLine:(long long)arg1;
- (void)socketManager:(id)arg1 sendMessageFailure:(int)arg2 seqId:(unsigned long long)arg3;
- (void)dISocketDataManagerDidReceivePushMsgModel:(id)arg1;
- (void)passengerAndDriverRelationshipFailed:(id)arg1;
- (void)passengerAndDriverRelationshipSuccess:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
