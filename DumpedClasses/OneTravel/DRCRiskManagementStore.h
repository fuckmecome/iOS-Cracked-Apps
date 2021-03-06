//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseStore.h"

#import "ONEAppDelegateStoreDelegate.h"

@class DRCRiskUserVerifyDataModel, NSString;

@interface DRCRiskManagementStore : DRCBaseStore <ONEAppDelegateStoreDelegate>
{
    DRCRiskUserVerifyDataModel *_riskUserVerifyDataModel;
    CDUnknownBlockType _riskFinishBlock;
    CDUnknownBlockType _alipayZMCallBack;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType alipayZMCallBack; // @synthesize alipayZMCallBack=_alipayZMCallBack;
@property(copy, nonatomic) CDUnknownBlockType riskFinishBlock; // @synthesize riskFinishBlock=_riskFinishBlock;
@property(retain, nonatomic) DRCRiskUserVerifyDataModel *riskUserVerifyDataModel; // @synthesize riskUserVerifyDataModel=_riskUserVerifyDataModel;
- (void).cxx_destruct;
- (_Bool)canOpenAlipay;
- (id)URLEncodedStringWithUrl:(id)arg1;
- (void)showCameraAuthAlert;
- (void)checkAllowUseCamara:(CDUnknownBlockType)arg1;
- (_Bool)openByAliPayApplication:(id)arg1;
- (_Bool)application_delegate:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)confirmIdentityInfoWithAvatarImage:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)confirmIdentityInfoWithBestImage:(id)arg1 delta:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)nextRiskStepWithNextRiskRuleCodeType:(int)arg1;
- (void)nextRiskStepWithRiskCheckAdmittanceModel:(id)arg1 isFirstStep:(_Bool)arg2;
- (void)nextRiskStepWithRiskCheckAdmittanceModel:(id)arg1;
- (void)checkLiveBodyWithbackViewController:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)getZMAuthorizationByAlipayAppWithOpenUrl:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (void)confirmZMResultZMTokenDataModel:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)getZMTokenWithIdentityInfo:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)checkNextRiskNeededFinishBlock:(CDUnknownBlockType)arg1 message:(id)arg2 isNeedShowAlert:(_Bool)arg3;
- (void)initialRiskInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

