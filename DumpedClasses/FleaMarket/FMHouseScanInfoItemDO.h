//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMHouseScanInfoItemDO : NSObject
{
    NSString *_imgUrl;
    NSArray *_cbCoeff;
    NSArray *_crCoeff;
    NSArray *_ycoeff;
}

@property(retain, nonatomic) NSArray *ycoeff; // @synthesize ycoeff=_ycoeff;
@property(retain, nonatomic) NSArray *crCoeff; // @synthesize crCoeff=_crCoeff;
@property(retain, nonatomic) NSArray *cbCoeff; // @synthesize cbCoeff=_cbCoeff;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;

@end

