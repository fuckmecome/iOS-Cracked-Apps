//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMy3DBaseBinDO : TBJSONModel
{
    NSString *_iosBinUrl;
    NSString *_iosMd5;
    NSString *_binUrl;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *binUrl; // @synthesize binUrl=_binUrl;
@property(copy, nonatomic) NSString *iosMd5; // @synthesize iosMd5=_iosMd5;
@property(copy, nonatomic) NSString *iosBinUrl; // @synthesize iosBinUrl=_iosBinUrl;
- (void).cxx_destruct;
- (id)validBinMd5;
- (id)validBinUrl;

@end

