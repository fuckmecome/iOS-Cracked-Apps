//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEVideoPlayInfo : JceObjectV2
{
    int jcev2_p_2_o_dtype;
    int jcev2_p_6_o_ptime;
    int jcev2_p_7_o_clip;
    int jcev2_p_8_o_dlna;
    int jcev2_p_9_o_fhdswitch;
    int jcev2_p_10_o_charge;
    int jcev2_p_11_o_defsrc;
    NSArray *jcev2_p_0_r_vids__b0x9i_VONSString;
    NSString *jcev2_p_1_o_defn;
    NSString *jcev2_p_3_o_otype;
    NSString *jcev2_p_4_o_callback;
    NSString *jcev2_p_5_o_callvar;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_defsrc, setter=setJce_defsrc:) int jcev2_p_11_o_defsrc; // @synthesize jcev2_p_11_o_defsrc;
@property(nonatomic, getter=jce_charge, setter=setJce_charge:) int jcev2_p_10_o_charge; // @synthesize jcev2_p_10_o_charge;
@property(nonatomic, getter=jce_fhdswitch, setter=setJce_fhdswitch:) int jcev2_p_9_o_fhdswitch; // @synthesize jcev2_p_9_o_fhdswitch;
@property(nonatomic, getter=jce_dlna, setter=setJce_dlna:) int jcev2_p_8_o_dlna; // @synthesize jcev2_p_8_o_dlna;
@property(nonatomic, getter=jce_clip, setter=setJce_clip:) int jcev2_p_7_o_clip; // @synthesize jcev2_p_7_o_clip;
@property(nonatomic, getter=jce_ptime, setter=setJce_ptime:) int jcev2_p_6_o_ptime; // @synthesize jcev2_p_6_o_ptime;
@property(retain, nonatomic, getter=jce_callvar, setter=setJce_callvar:) NSString *jcev2_p_5_o_callvar; // @synthesize jcev2_p_5_o_callvar;
@property(retain, nonatomic, getter=jce_callback, setter=setJce_callback:) NSString *jcev2_p_4_o_callback; // @synthesize jcev2_p_4_o_callback;
@property(retain, nonatomic, getter=jce_otype, setter=setJce_otype:) NSString *jcev2_p_3_o_otype; // @synthesize jcev2_p_3_o_otype;
@property(nonatomic, getter=jce_dtype, setter=setJce_dtype:) int jcev2_p_2_o_dtype; // @synthesize jcev2_p_2_o_dtype;
@property(retain, nonatomic, getter=jce_defn, setter=setJce_defn:) NSString *jcev2_p_1_o_defn; // @synthesize jcev2_p_1_o_defn;
@property(retain, nonatomic, getter=jce_vids, setter=setJce_vids:) NSArray *jcev2_p_0_r_vids__b0x9i_VONSString; // @synthesize jcev2_p_0_r_vids__b0x9i_VONSString;
- (void).cxx_destruct;
- (id)init;

@end

