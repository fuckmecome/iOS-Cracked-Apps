//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLTaskModel.h"

#import "QLJCEBusinessType.h"

@class NSDictionary, NSString;

@interface QLDeleteModel : QLTaskModel <QLJCEBusinessType>
{
    NSString *_msgID;
    NSDictionary *_extDict;
    NSString *_reMsgID;
}

@property(retain, nonatomic) NSString *reMsgID; // @synthesize reMsgID=_reMsgID;
@property(retain, nonatomic) NSDictionary *extDict; // @synthesize extDict=_extDict;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)formatJCEByModelItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long jceBusinessType;
@property(readonly) Class superclass;

@end

