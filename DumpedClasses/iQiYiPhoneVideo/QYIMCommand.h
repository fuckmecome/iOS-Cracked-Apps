//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYIMElement.h"

#import "IQYIMCommand-Protocol.h"

@class NSDictionary, NSNumber, NSString, QYIMNode;

@interface QYIMCommand : QYIMElement <IQYIMCommand>
{
    NSString *_business;
    unsigned long long _cmdType;
    QYIMNode *_sender;
    QYIMNode *_receiver;
    NSDictionary *_content;
    NSString *_extTypeName;
    NSNumber *_gid;
    NSString *_commandId;
    long long _createTime;
}

+ (id)convertCmdFromQECmd:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)stringValue;
- (id)generateCommandId;
- (id)genCommandId;
- (id)beforeSendCommand;
@property(nonatomic) long long createTime;
@property(retain, nonatomic) NSString *commandId;
@property(retain, nonatomic) NSNumber *gid;
@property(retain, nonatomic) NSDictionary *content;
@property(retain, nonatomic) QYIMNode *receiver;
@property(retain, nonatomic) QYIMNode *sender;
@property(nonatomic) unsigned long long cmdType;
@property(retain, nonatomic) NSString *business;
@property(retain, nonatomic) NSString *extTypeName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

