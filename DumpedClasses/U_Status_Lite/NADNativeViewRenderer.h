//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NADNativeImageDownloader;

@interface NADNativeViewRenderer : NSObject
{
    NADNativeImageDownloader *_downloader;
}

+ (id)sharedRenderer;
@property(retain, nonatomic) NADNativeImageDownloader *downloader; // @synthesize downloader=_downloader;
- (void).cxx_destruct;
- (void)tryRenderImageWithUrl:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3;
- (void)tryRenderText:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3;
- (void)tryRenderTextUsingDelegate:(id)arg1 withAd:(id)arg2;
- (_Bool)hasPrTextLabel:(id)arg1;
- (void)clearRenderingOfView:(id)arg1;
- (void)renderAdView:(id)arg1 withAd:(id)arg2;
- (id)init;

@end

