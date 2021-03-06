//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QQGroupTribeImageView;

@interface QQGroupTribeAddNewImageView : UIButton
{
    QQGroupTribeImageView *_sourceView;
    UIButton *_deleteButton;
    int _photoState;
    double _uploadProgress;
    id <QQGroupTribeAddNewImageDelegate> _delegate;
    int _xo;
}

@property(nonatomic) double uploadProgress; // @dynamic uploadProgress;
- (void)layoutSubviews;
- (void)setPhotoState:(int)arg1;
- (void)dealloc;
- (void)deleteSelfFromChoose;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <QQGroupTribeAddNewImageDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QQGroupTribeImageView *sourceView; // @dynamic sourceView;

@end

