//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle;

@interface ReadInJoyContentView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    unsigned long long _contentType;
}

@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

