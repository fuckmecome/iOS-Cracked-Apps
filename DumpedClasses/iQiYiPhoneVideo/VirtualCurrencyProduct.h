//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VirtualCurrencyProduct : NSObject
{
    NSString *_app_id;
    NSString *_fee;
    NSString *_pname;
}

+ (id)parseForArray:(id)arg1;
@property(copy, nonatomic) NSString *pname; // @synthesize pname=_pname;
@property(copy, nonatomic) NSString *fee; // @synthesize fee=_fee;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
- (void).cxx_destruct;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

