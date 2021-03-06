//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLSprayVideoView.h"

#import "KKMediaPlayerEventProtocol.h"

@class NSString, QLJCEVideoAttentItem;

@interface QLHollwoodSprayVideoView : QLSprayVideoView <KKMediaPlayerEventProtocol>
{
    CDUnknownBlockType _playerStateBlock;
    QLJCEVideoAttentItem *_attentItem;
}

@property(retain, nonatomic) QLJCEVideoAttentItem *attentItem; // @synthesize attentItem=_attentItem;
@property(copy, nonatomic) CDUnknownBlockType playerStateBlock; // @synthesize playerStateBlock=_playerStateBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)playAction:(id)arg1;
- (void)configVoiceButton;
- (_Bool)shouldReportClickEvent;
- (void)updateStatusBarStyle;
- (_Bool)shouldSaveRecord;
- (void)kkPlayer:(id)arg1 didClickButton:(unsigned long long)arg2;
- (id)getCurrentAttentionItem;
- (void)updateAttentItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

