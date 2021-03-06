//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWebViewController.h"

#import "ArgoWebViewWVControllerProtocol.h"

@class NSString, UIView, UIView<WVWebViewProtocol>;

@interface ArgoWVWebViewController : WVWebViewController <ArgoWebViewWVControllerProtocol>
{
    CDUnknownBlockType _webViewShouldStartLoadWithRequestBlock;
    CDUnknownBlockType _webViewDidStartLoadBlock;
    CDUnknownBlockType _webViewDidFinishLoadBlock;
    CDUnknownBlockType _webViewDidFailLoadBlock;
}

@property(copy, nonatomic) CDUnknownBlockType webViewDidFailLoadBlock; // @synthesize webViewDidFailLoadBlock=_webViewDidFailLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidFinishLoadBlock; // @synthesize webViewDidFinishLoadBlock=_webViewDidFinishLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewDidStartLoadBlock; // @synthesize webViewDidStartLoadBlock=_webViewDidStartLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewShouldStartLoadWithRequestBlock; // @synthesize webViewShouldStartLoadWithRequestBlock=_webViewShouldStartLoadWithRequestBlock;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool isShowLoadingBox;
@property(readonly) Class superclass;
@property(retain) UIView *view;
@property(retain) UIView<WVWebViewProtocol> *webView;

@end

