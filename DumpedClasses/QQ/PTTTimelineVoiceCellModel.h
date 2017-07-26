//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTTTimelineBaseCellModel.h"

@class NSString, QQVoiceCellModel;

@interface PTTTimelineVoiceCellModel : PTTTimelineBaseCellModel
{
    _Bool _isSend;
    _Bool _isReceive;
    _Bool _isPlaying;
    _Bool _isGirl;
    float _playingProgress;
    NSString *_groupCode;
    long long _msgSeq;
    long long _messageRandom;
    unsigned long long _time;
    NSString *_uin;
    NSString *_nick;
    long long _sendState;
    long long _receiveState;
    double _duration;
    QQVoiceCellModel *_voiceModelInAIO;
    NSString *_dateString;
    NSString *_weekString;
    NSString *_timeString;
    NSString *_hourString;
}

+ (long long)receiveStateFromMessageState:(int)arg1;
+ (long long)sendStateFromMessageState:(int)arg1;
+ (id)convertFromVoiceModel:(id)arg1;
+ (id)convertFromMessageModel:(id)arg1;
@property(copy, nonatomic) NSString *hourString; // @synthesize hourString=_hourString;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *weekString; // @synthesize weekString=_weekString;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) QQVoiceCellModel *voiceModelInAIO; // @synthesize voiceModelInAIO=_voiceModelInAIO;
@property(nonatomic) float playingProgress; // @synthesize playingProgress=_playingProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isGirl; // @synthesize isGirl=_isGirl;
@property(nonatomic) long long receiveState; // @synthesize receiveState=_receiveState;
@property(nonatomic) long long sendState; // @synthesize sendState=_sendState;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isReceive; // @synthesize isReceive=_isReceive;
@property(nonatomic) _Bool isSend; // @synthesize isSend=_isSend;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) long long messageRandom; // @synthesize messageRandom=_messageRandom;
@property(nonatomic) long long msgSeq; // @synthesize msgSeq=_msgSeq;
@property(copy, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (void).cxx_destruct;
- (void)updateFromVoiceModel:(id)arg1;
- (void)updateFromMessageModel:(id)arg1;
- (void)updateFromMessageModel:(id)arg1 reconstructVoiceModel:(_Bool)arg2;
- (id)description;

@end
