//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEPoster;

@interface QLJCESearchRankResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_itemList__b0x9i_VOQLJCERankItem;
    NSString *jcev2_p_2_o_groupTitle;
    NSString *jcev2_p_3_o_timeStamp;
    QLJCEPoster *jcev2_p_4_o_adPoster;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_adPoster, setter=setJce_adPoster:) QLJCEPoster *jcev2_p_4_o_adPoster; // @synthesize jcev2_p_4_o_adPoster;
@property(retain, nonatomic, getter=jce_timeStamp, setter=setJce_timeStamp:) NSString *jcev2_p_3_o_timeStamp; // @synthesize jcev2_p_3_o_timeStamp;
@property(retain, nonatomic, getter=jce_groupTitle, setter=setJce_groupTitle:) NSString *jcev2_p_2_o_groupTitle; // @synthesize jcev2_p_2_o_groupTitle;
@property(retain, nonatomic, getter=jce_itemList, setter=setJce_itemList:) NSArray *jcev2_p_1_o_itemList__b0x9i_VOQLJCERankItem; // @synthesize jcev2_p_1_o_itemList__b0x9i_VOQLJCERankItem;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

