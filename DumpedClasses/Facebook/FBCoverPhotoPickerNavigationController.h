//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "FBComposerPublisherStatusListener-Protocol.h"
#import "FBMediaAttachmentPickerControllerDelegate-Protocol.h"
#import "FBTimelineEditCoverControllerDelegate-Protocol.h"

@class FBBezelView, FBComposerLogger, FBContextualTimelineHeaderConfiguration, FBMediaAttachmentPickerController, FBMemPerson, FBProfileToolbox, FBTimelineTemporaryCoverPhoto, FBUserSession, NSObject, NSString;
@protocol FBComposerPublisher, FBCoverPhotoPickerNavigationControllerDelegate;

@interface FBCoverPhotoPickerNavigationController : UINavigationController <FBMediaAttachmentPickerControllerDelegate, FBTimelineEditCoverControllerDelegate, FBComposerPublisherStatusListener>
{
    FBUserSession *_session;
    FBMemPerson *_person;
    FBContextualTimelineHeaderConfiguration *_configuration;
    FBMediaAttachmentPickerController *_mediaAttachmentPickerController;
    FBTimelineTemporaryCoverPhoto *_temporaryCoverPhoto;
    FBBezelView *_loadingView;
    _Bool _showLoadingIndicatorWhileUploading;
    _Bool _showProfileAfterUpload;
    _Bool _isEditingCoverPhotoFromSimplePicker;
    UINavigationController *_navigationControllerToPresent;
    NSObject *_scenePath;
    FBProfileToolbox *_toolbox;
    FBComposerLogger *_logger;
    id <FBComposerPublisher> _publisher;
    id <FBCoverPhotoPickerNavigationControllerDelegate> _coverPhotoPickerNavigationControllerDelegate;
}

@property(nonatomic) __weak id <FBCoverPhotoPickerNavigationControllerDelegate> coverPhotoPickerNavigationControllerDelegate; // @synthesize coverPhotoPickerNavigationControllerDelegate=_coverPhotoPickerNavigationControllerDelegate;
- (void).cxx_destruct;
- (void)startedServerProcessingForUploadedPublication:(id)arg1;
- (void)cannotCancelPublishingOfPublisherData:(id)arg1;
- (void)canCancelPublishingOfPublisherData:(id)arg1;
- (void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2;
- (void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3;
- (void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2;
- (void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2;
- (void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1;
- (void)retriedPublishingPublisherData:(id)arg1;
- (void)pausedPublishingPublisherData:(id)arg1;
- (void)cancelledPublishingPublisherData:(id)arg1;
- (void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2;
- (void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2;
- (void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2;
- (void)attemptedPublicationOfPublisherData:(id)arg1;
- (void)startedPublishingPublisherData:(id)arg1;
- (void)_dismissLoadingViewWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopLoadingViewWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showLoadingView;
- (void)_uploadDidSucceed;
- (void)_uploadDidFail;
- (void)_editCoverWithImage:(id)arg1;
- (void)cancelDirectCoverPhotoEditWithFocus:(struct CGPoint)arg1;
- (void)showNotificationfOfStartUploading;
- (void)_uploadMemorialCover:(id)arg1 focus:(struct CGPoint)arg2;
- (void)saveCoverPhoto:(id)arg1 focus:(struct CGPoint)arg2;
- (void)mediaAttachmentPickerController:(id)arg1 openURL:(id)arg2;
- (void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1;
- (void)_dismissMediaAttachmentPickerController:(id)arg1;
- (void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1;
- (void)mediaAttachmentPickerControllerDidCancel:(id)arg1;
- (void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(long long)arg3;
- (id)presentablePhotoPicker;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1 showLoadingIndicator:(_Bool)arg2 showProfile:(_Bool)arg3 person:(id)arg4 configuration:(id)arg5 coverPhotoImage:(id)arg6 toolbox:(id)arg7;
- (id)initWithSession:(id)arg1 showLoadingIndicator:(_Bool)arg2 showProfile:(_Bool)arg3 person:(id)arg4 configuration:(id)arg5 toolbox:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

