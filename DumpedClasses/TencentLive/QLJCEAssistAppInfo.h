//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEAssistAppInfo : JceObjectV2
{
    NSString *jcev2_p_0_r_appPackageName;
    NSString *jcev2_p_1_r_serviceComponent;
    NSString *jcev2_p_2_o_serviceScheme;
    NSString *jcev2_p_3_o_activityComponent;
    NSString *jcev2_p_4_o_activityScheme;
    NSString *jcev2_p_5_o_action;
    NSString *jcev2_p_6_o_category;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_category, setter=setJce_category:) NSString *jcev2_p_6_o_category; // @synthesize jcev2_p_6_o_category;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) NSString *jcev2_p_5_o_action; // @synthesize jcev2_p_5_o_action;
@property(retain, nonatomic, getter=jce_activityScheme, setter=setJce_activityScheme:) NSString *jcev2_p_4_o_activityScheme; // @synthesize jcev2_p_4_o_activityScheme;
@property(retain, nonatomic, getter=jce_activityComponent, setter=setJce_activityComponent:) NSString *jcev2_p_3_o_activityComponent; // @synthesize jcev2_p_3_o_activityComponent;
@property(retain, nonatomic, getter=jce_serviceScheme, setter=setJce_serviceScheme:) NSString *jcev2_p_2_o_serviceScheme; // @synthesize jcev2_p_2_o_serviceScheme;
@property(retain, nonatomic, getter=jce_serviceComponent, setter=setJce_serviceComponent:) NSString *jcev2_p_1_r_serviceComponent; // @synthesize jcev2_p_1_r_serviceComponent;
@property(retain, nonatomic, getter=jce_appPackageName, setter=setJce_appPackageName:) NSString *jcev2_p_0_r_appPackageName; // @synthesize jcev2_p_0_r_appPackageName;
- (void).cxx_destruct;
- (id)init;

@end

