//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QPChatCache : NSObject
{
    NSMutableDictionary *_caches;
}

@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
- (void).cxx_destruct;
- (void)addItemWithKey:(id)arg1 attributedString:(id)arg2 textSize:(struct CGSize)arg3 otherDic:(id)arg4;
- (void)addItem:(id)arg1 forKey:(id)arg2;
- (_Bool)hasTimeCache;
- (id)cacheForKey:(id)arg1;

@end

