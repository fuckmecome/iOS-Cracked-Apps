//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OMerchantAttentionShopModel : O2OHTTPModel
{
    _Bool _isAttention;
    NSString *_shopId;
}

@property(nonatomic) _Bool isAttention; // @synthesize isAttention=_isAttention;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end
