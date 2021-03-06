//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiAnnotation.h"

@class NSString, UIView;

@interface DiTextAnnotation : NSObject <DiAnnotation>
{
    _Bool canMaskAnimation;
    _Bool autoAdjustCalloutViewPositon;
    _Bool _autoAdjustTextPositon;
    NSString *_text;
    NSString *_fontName;
    double _fontSize;
    NSString *_textColorString;
    NSString *_imageName;
    double _maxFontSize;
    double _minFontSize;
    struct CLLocationCoordinate2D _coordinate;
    struct CGRect _textRc;
    CDStruct_b7cb895d _showRegion;
}

@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double maxFontSize; // @synthesize maxFontSize=_maxFontSize;
@property(nonatomic) _Bool autoAdjustTextPositon; // @synthesize autoAdjustTextPositon=_autoAdjustTextPositon;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) CDStruct_b7cb895d showRegion; // @synthesize showRegion=_showRegion;
@property(copy, nonatomic) NSString *textColorString; // @synthesize textColorString=_textColorString;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGRect textRc; // @synthesize textRc=_textRc;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) _Bool autoAdjustCalloutViewPositon; // @synthesize autoAdjustCalloutViewPositon;
@property(nonatomic) _Bool canMaskAnimation; // @synthesize canMaskAnimation;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIView *customCalloutView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

