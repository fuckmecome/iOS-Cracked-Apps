//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface SCFindPasswordManger : NSObject
{
    _Bool _isFindSucess;
    _Bool _isNoAutoLogin;
    id <SCFindPasswordRootViewControllerDelegate> _delegate;
    UIViewController *_rootViewController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <SCFindPasswordRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNoAutoLogin; // @synthesize isNoAutoLogin=_isNoAutoLogin;
@property(nonatomic) _Bool isFindSucess; // @synthesize isFindSucess=_isFindSucess;
- (void).cxx_destruct;
- (id)parentViewController;

@end
