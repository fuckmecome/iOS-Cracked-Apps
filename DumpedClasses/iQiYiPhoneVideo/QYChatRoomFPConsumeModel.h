//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYChatRoomFreePropBaseModel.h"

@class NSString;

@interface QYChatRoomFPConsumeModel : QYChatRoomFreePropBaseModel
{
    NSString *_to_uid;
    NSString *_product_id;
    NSString *_payer_uid;
    NSString *_num;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *payer_uid; // @synthesize payer_uid=_payer_uid;
@property(retain, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(retain, nonatomic) NSString *to_uid; // @synthesize to_uid=_to_uid;
- (void).cxx_destruct;
- (id)initFPConsumeWithDic:(id)arg1;

@end

