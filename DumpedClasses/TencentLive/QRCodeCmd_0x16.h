//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRCodeCmd.h"

@class NSData, NSMutableDictionary, NSString;

@interface QRCodeCmd_0x16 : QRCodeCmd
{
    NSString *reserved;
    unsigned int dwAppid;
    NSData *qrCodeSig;
    unsigned long long ddwUin;
    unsigned char cLoginSigType;
    NSData *clientSt;
    unsigned short wTlvNum;
    unsigned short awTlvFieled[64];
    NSMutableDictionary *reqTlvDataDic;
    NSMutableDictionary *rspTlvDataDic;
    NSString *errMsg;
}

@property(readonly) NSMutableDictionary *rspTlvDataDic; // @synthesize rspTlvDataDic;
@property(readonly) NSMutableDictionary *reqTlvDataDic; // @synthesize reqTlvDataDic;
@property(copy) NSString *errMsg; // @synthesize errMsg;
@property(copy) NSData *clientSt; // @synthesize clientSt;
@property unsigned long long ddwUin; // @synthesize ddwUin;
@property unsigned char cLoginSigType; // @synthesize cLoginSigType;
@property(copy) NSData *qrCodeSig; // @synthesize qrCodeSig;
@property(copy) NSString *reserved; // @synthesize reserved;
@property unsigned int dwAppid; // @synthesize dwAppid;
- (void)addRspTlv:(unsigned short)arg1 andTlv:(id)arg2;
- (void)setTlv:(unsigned short)arg1 andData:(id)arg2;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)addReqTlv:(unsigned short)arg1;
- (void)dealloc;
- (id)init;

@end

