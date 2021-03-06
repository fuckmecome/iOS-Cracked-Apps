//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYUploadConnection.h"

@class NSMutableData, NSString, TXYUploadHttpStream;

@interface TXYUploadHttpConnection : TXYUploadConnection
{
    NSMutableData *_respData;
    TXYUploadHttpStream *_wnsHttpStream;
    double _connectTime;
    NSString *_hostName;
}

@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) TXYUploadHttpStream *wnsHttpStream; // @synthesize wnsHttpStream=_wnsHttpStream;
@property(retain, nonatomic) NSMutableData *respData; // @synthesize respData=_respData;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectiondidReceiveResponse:(id)arg1;
- (void)connectiondidConnected:(id)arg1;
- (int)outputStreamStatus;
- (int)inputStreamStatus;
- (void)streamInfo;
- (int)send:(id)arg1;
- (void)Connect:(const char *)arg1 port:(int)arg2 timeOut:(double)arg3;
- (id)getRemoteIPAddress;
- (void)DisConnect;
- (void)dealloc;
- (id)initWithHostName:(id)arg1;
- (id)init;

@end

