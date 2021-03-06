//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZTextAttachment : NSObject
{
    id _contentObj;
    double _baseLine;
    struct CGSize _displaySize;
    struct CGRect _frame;
}

+ (Class)registeredClassForTag:(id)arg1;
+ (void)registerClass:(Class)arg1 forTag:(id)arg2;
+ (void)initialize;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double baseLine; // @synthesize baseLine=_baseLine;
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(retain, nonatomic) id contentObj; // @synthesize contentObj=_contentObj;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (id)attributeString;
- (void)adjustToAlignment:(unsigned long long)arg1 fontAscent:(double)arg2 fontDescent:(double)arg3;
- (void)adjustToAlignment:(unsigned long long)arg1 font:(id)arg2 fontAscent:(double)arg3 fontDescent:(double)arg4;
- (void)setAlignment:(unsigned long long)arg1 font:(id)arg2 fontAscent:(double)arg3 fontDescent:(double)arg4;
- (void)setAlignment:(unsigned long long)arg1 fontAscent:(double)arg2 fontDescent:(double)arg3;
@property(readonly, nonatomic) double widthForLayout;
@property(readonly, nonatomic) double descentForLayout;
@property(readonly, nonatomic) double ascentForLayout;
- (id)getDrawItem;
- (id)copyableText;
- (id)voiceText;

@end

