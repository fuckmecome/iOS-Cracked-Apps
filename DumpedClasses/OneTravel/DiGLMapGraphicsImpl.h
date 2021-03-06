//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CATextLayer, NSMutableDictionary, NSString;

@interface DiGLMapGraphicsImpl : NSObject
{
    NSMutableDictionary *_dictionaryFontSizes;
    CATextLayer *_textLayer;
    NSString *_fontName;
    NSString *_boldFontName;
    NSMutableDictionary *_dictionaryImages;
}

@property(retain, nonatomic) NSMutableDictionary *dictionaryImages; // @synthesize dictionaryImages=_dictionaryImages;
@property(retain, nonatomic) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) NSMutableDictionary *dictionaryFontSizes; // @synthesize dictionaryFontSizes=_dictionaryFontSizes;
- (id)imageByName:(id)arg1;
- (void)removeImage:(id)arg1;
- (void)addImage:(id)arg1 image:(id)arg2;
- (unsigned int)intFromHexString:(id)arg1;
- (id)getUIColorObjectFromHexString:(id)arg1 alpha:(double)arg2;
- (struct _DDBitmap *)imageFromString:(id)arg1 attributes:(id)arg2 size:(struct CGSize)arg3;
- (struct _DDBitmap *)createDrawText:(id)arg1 scale:(float *)arg2;
- (struct _DDBitmap *)createDrawFlagTexture:(id)arg1 scale:(float *)arg2 popMode:(long long)arg3 popType:(long long)arg4;
- (struct _DDBitmap *)createSubPoiTexture:(id)arg1 scale:(float *)arg2 anchorPointX1:(float *)arg3 anchorPointY1:(float *)arg4;
- (struct _DDBitmap *)createRouteArrowTexture:(int)arg1;
- (struct _DDBitmap *)loadImage:(const char *)arg1 code:(long long)arg2 scale:(float *)arg3 anchorPointX1:(float *)arg4 anchorPointY1:(float *)arg5;
- (struct _DDSize)calcTextSize:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
- (void)drawString:(struct _DDTextBitmap *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(_Bool)arg5 density:(float)arg6;
- (void)dealloc;
- (id)init;

@end

