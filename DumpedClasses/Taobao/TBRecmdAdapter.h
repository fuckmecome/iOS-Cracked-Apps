//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBRecmdContext;

@interface TBRecmdAdapter : NSObject
{
    TBRecmdContext *_context;
}

+ (id)adapterWithContext:(id)arg1;
@property(nonatomic) __weak TBRecmdContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)loadImageUrl:(id)arg1 forImageView:(id)arg2 isNeedOriginImage:(_Bool)arg3 withCallBack:(CDUnknownBlockType)arg4;

@end

