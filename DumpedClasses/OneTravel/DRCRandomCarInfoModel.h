//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DRCRandomCarInfoModel : JSONModel
{
    NSString *_imageUrl;
    NSString *_desc;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

@end
