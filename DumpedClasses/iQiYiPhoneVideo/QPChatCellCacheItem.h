//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableAttributedString;

@interface QPChatCellCacheItem : NSObject
{
    NSMutableAttributedString *_attrStr;
    NSDictionary *_otherDic;
    struct CGSize _size;
}

+ (id)itemWithAttributedString:(id)arg1 textSize:(struct CGSize)arg2 otherDic:(id)arg3;
@property(retain, nonatomic) NSDictionary *otherDic; // @synthesize otherDic=_otherDic;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableAttributedString *attrStr; // @synthesize attrStr=_attrStr;
- (void).cxx_destruct;

@end

