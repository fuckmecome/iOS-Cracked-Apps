//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IOMCookieManager : NSObject
{
    NSString *_odfrmStr;
}

+ (void)attempDealloc;
+ (void)cleanCookie;
+ (_Bool)alreadyAddCookie:(id)arg1;
+ (id)httpHeaderFieldCookieValue;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *odfrmStr; // @synthesize odfrmStr=_odfrmStr;
- (void).cxx_destruct;
- (void)markOdfrm:(id)arg1;
- (_Bool)isMallUrl:(id)arg1;

@end

