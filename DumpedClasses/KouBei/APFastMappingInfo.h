//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APDAOPack, NSString;

@interface APFastMappingInfo : NSObject
{
    _Bool crypt;
    APDAOPack *pack;
    NSString *className;
    NSString *propertyName;
    _Bool genericType;
    struct objc_ivar *ivar;
    CDUnknownFunctionPointerType setter;
    SEL selector;
    CDUnknownFunctionPointerType method;
}

- (void).cxx_destruct;

@end

