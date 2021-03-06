//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol NMSkinThemeHandlerProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType changingThemeHandler;
- (void)removeAllChangingThemeHandler;
- (void)removeChangingThemeHandlerForKey:(NSString *)arg1;
- (void)addChangingThemeHandler:(void (^)(NMSkinTheme *, NMSkinTheme *))arg1 forKey:(NSString *)arg2;
- (void)removeNightModeChangingThemeHandlerForKey:(NSString *)arg1;
- (void)addNightModeChangingThemeHandler:(void (^)(NMSkinTheme *, NMSkinTheme *))arg1 forKey:(NSString *)arg2;
- (void (^)(NMSkinTheme *, NMSkinTheme *))nightModeChangingThemeHandlerForKey:(NSString *)arg1;
- (void (^)(NMSkinTheme *, NMSkinTheme *))changingThemeHandlerForKey:(NSString *)arg1;
- (NSArray *)allChangingThemeHandlers;
- (NSArray *)allKeysForChangingThemeHandlers;
@end

