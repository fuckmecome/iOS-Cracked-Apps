//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel;
@protocol QXBigSpeakerBaseViewDelegate;

@interface QXBigSpeakerBaseView : UIButton
{
    UIImageView *_userIconView;
    UILabel *_userNameLabel;
    UIImageView *_bgView;
    NSString *_roomIDString;
    id <QXBigSpeakerBaseViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QXBigSpeakerBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *roomIDString; // @synthesize roomIDString=_roomIDString;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userIconView; // @synthesize userIconView=_userIconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (void)jumpToOtherChatRoom;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

