//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSString;
@protocol Optional;

@interface QYPPMovieCircleEpisodesData : QYPPJsonData
{
    NSString<Optional> *_wallId;
    NSString<Optional> *_wallType;
    NSString<Optional> *_wallName;
    NSString<Optional> *_wallIcon;
    NSString<Optional> *_feedCount;
    NSString<Optional> *_playCount;
    NSString<Optional> *_wallDes;
    NSString<Optional> *_recom;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString<Optional> *recom; // @synthesize recom=_recom;
@property(retain, nonatomic) NSString<Optional> *wallDes; // @synthesize wallDes=_wallDes;
@property(retain, nonatomic) NSString<Optional> *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString<Optional> *feedCount; // @synthesize feedCount=_feedCount;
@property(retain, nonatomic) NSString<Optional> *wallIcon; // @synthesize wallIcon=_wallIcon;
@property(retain, nonatomic) NSString<Optional> *wallName; // @synthesize wallName=_wallName;
@property(retain, nonatomic) NSString<Optional> *wallType; // @synthesize wallType=_wallType;
@property(retain, nonatomic) NSString<Optional> *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;

@end

