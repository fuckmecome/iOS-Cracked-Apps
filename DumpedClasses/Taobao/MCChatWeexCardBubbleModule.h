//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface MCChatWeexCardBubbleModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_34;
+ (id)wx_export_method_33;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)showSelectDialog:(id)arg1 meunTitles:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)showToast:(id)arg1 toast:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

