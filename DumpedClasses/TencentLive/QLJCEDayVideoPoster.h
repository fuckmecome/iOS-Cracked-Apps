//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEPoster, QLJCEVideoPosterInfo;

@interface QLJCEDayVideoPoster : JceObjectV2
{
    QLJCEPoster *jcev2_p_0_r_poster;
    QLJCEVideoPosterInfo *jcev2_p_1_r_videoPosterInfo;
    NSString *jcev2_p_2_o_reportParams;
    NSString *jcev2_p_3_o_reportKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_3_o_reportKey; // @synthesize jcev2_p_3_o_reportKey;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_2_o_reportParams; // @synthesize jcev2_p_2_o_reportParams;
@property(retain, nonatomic, getter=jce_videoPosterInfo, setter=setJce_videoPosterInfo:) QLJCEVideoPosterInfo *jcev2_p_1_r_videoPosterInfo; // @synthesize jcev2_p_1_r_videoPosterInfo;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_0_r_poster; // @synthesize jcev2_p_0_r_poster;
- (void).cxx_destruct;
- (id)init;

@end
