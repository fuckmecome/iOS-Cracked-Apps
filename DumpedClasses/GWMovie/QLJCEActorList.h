//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEActorList : JceObjectV2
{
    NSString *jcev2_p_0_r_title;
    NSArray *jcev2_p_1_r_actorInfoList__b0x9i_VOQLJCEActorInfo;
    NSString *jcev2_p_2_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_actorInfoList, setter=setJce_actorInfoList:) NSArray *jcev2_p_1_r_actorInfoList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_1_r_actorInfoList__b0x9i_VOQLJCEActorInfo;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void)dealloc;
- (id)init;

@end
