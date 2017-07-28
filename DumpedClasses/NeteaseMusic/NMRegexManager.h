//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRegularExpression;

@interface NMRegexManager : NSObject
{
    NSRegularExpression *_atRegex;
    NSRegularExpression *_tagRegex;
    NSRegularExpression *_urlRegex;
    NSRegularExpression *_emotionRegex;
    NSRegularExpression *_emailRegex;
    NSRegularExpression *_phoneRegex;
    NSRegularExpression *_gifUrlRegex;
    NSRegularExpression *_topicRegex;
}

+ (id)regexManager;
- (void).cxx_destruct;
- (id)gifUrlRegex;
- (id)phoneRegex;
- (id)emotionRegex;
- (id)urlRegex;
- (id)topicRegex;
- (id)tagRegex;
- (id)emailRegex;
- (id)atRegex;
- (void)dealloc;
- (id)init;

@end
