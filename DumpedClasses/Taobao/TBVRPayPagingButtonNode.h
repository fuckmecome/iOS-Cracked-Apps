//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRPayBaseButtonNode.h"

@class VUITexture;

@interface TBVRPayPagingButtonNode : TBVRPayBaseButtonNode
{
    _Bool _disabled;
    VUITexture *_disabledTexture;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) VUITexture *disabledTexture; // @synthesize disabledTexture=_disabledTexture;
- (void).cxx_destruct;
- (_Bool)onFocusEvent:(id)arg1;
- (id)initWithGeometry:(id)arg1 manager:(id)arg2;

@end

