//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, FBMemImage, SBMomentsAppPhotoFrameView, UIImageView, UILabel;

@interface SBMomentsAppSegueView : UIView
{
    SBMomentsAppPhotoFrameView *_frontPhoto;
    SBMomentsAppPhotoFrameView *_backPhoto;
    FBButton *_actionButton;
    UIImageView *_privacyIcon;
    UILabel *_privacyLabel;
}

@property(readonly, nonatomic) FBButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) FBMemImage *previewImage;
- (id)initWithSession:(id)arg1;

@end

