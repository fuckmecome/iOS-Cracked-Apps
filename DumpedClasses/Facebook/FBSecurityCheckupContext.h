//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSString;

@interface FBSecurityCheckupContext : NSObject
{
    _Bool _shouldShowStatusBar;
    FBUserSession *_userSession;
    NSString *_source;
    struct CGSize _containingViewSize;
}

@property(nonatomic) _Bool shouldShowStatusBar; // @synthesize shouldShowStatusBar=_shouldShowStatusBar;
@property(nonatomic) struct CGSize containingViewSize; // @synthesize containingViewSize=_containingViewSize;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 source:(id)arg2 containingViewSize:(struct CGSize)arg3 shouldShowStatusBar:(_Bool)arg4;

@end

