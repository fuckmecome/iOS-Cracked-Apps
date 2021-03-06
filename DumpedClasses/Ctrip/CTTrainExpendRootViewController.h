//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTTrainNavigationBar, NSMutableDictionary;

@interface CTTrainExpendRootViewController : CTRootViewController
{
    _Bool _isHiddenTrainNavigationBar;
    _Bool _isShowNavigationBarInViewWillDisAppear;
    CTTrainNavigationBar *_trainNavigationBar;
    NSMutableDictionary *_mutexServiceTokenDic;
}

@property(retain, nonatomic) NSMutableDictionary *mutexServiceTokenDic; // @synthesize mutexServiceTokenDic=_mutexServiceTokenDic;
@property(nonatomic) _Bool isShowNavigationBarInViewWillDisAppear; // @synthesize isShowNavigationBarInViewWillDisAppear=_isShowNavigationBarInViewWillDisAppear;
@property(nonatomic) _Bool isHiddenTrainNavigationBar; // @synthesize isHiddenTrainNavigationBar=_isHiddenTrainNavigationBar;
@property(retain, nonatomic) CTTrainNavigationBar *trainNavigationBar; // @synthesize trainNavigationBar=_trainNavigationBar;
- (void).cxx_destruct;
- (void)registerDefaultLoadingWithToken:(id)arg1;
- (void)registerWindowLoadingWithToken:(id)arg1 loadingText:(id)arg2;
- (void)doRequestWithSender:(id)arg1 tokenKey:(id)arg2 showLoading:(_Bool)arg3 showCancel:(_Bool)arg4 showError:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)doRequestPartiallyWithSender:(id)arg1 tokenKey:(id)arg2 showError:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)doRequestPartiallyWithSender:(id)arg1 tokenKey:(id)arg2 success:(CDUnknownBlockType)arg3;
- (void)doRequestSubmitWithSender:(id)arg1 loadingText:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)doRequestSubmitWithSender:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)doRequestEnableCancelWithSender:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)doRequestEnableCancelWithSender:(id)arg1 loadingText:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)mainRequestFinished;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

