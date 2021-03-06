//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<WDAnswerStructModel>, NSArray<WDInviteUserStructModel>, NSArray<WDModuleStructModel>, NSNumber, NSNumber<Optional>, NSString<Optional>, WDChannelRecommendStructModel<Optional>, WDQuestionStructModel, WDShowFormatStructModel<Optional>;

@interface WDWendaQuestionBrowResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    WDQuestionStructModel *_question;
    NSArray<WDAnswerStructModel> *_ans_list;
    NSNumber *_offset;
    NSNumber *_has_more;
    WDChannelRecommendStructModel<Optional> *_channel_data;
    NSArray<WDInviteUserStructModel> *_candidate_invite_user;
    WDShowFormatStructModel<Optional> *_show_format;
    NSString<Optional> *_channel_schema;
    NSNumber *_module_count;
    NSArray<WDModuleStructModel> *_module_list;
    NSNumber<Optional> *_question_type;
    NSNumber<Optional> *_question_header_content_fold_max_count;
}

@property(retain, nonatomic) NSNumber<Optional> *question_header_content_fold_max_count; // @synthesize question_header_content_fold_max_count=_question_header_content_fold_max_count;
@property(retain, nonatomic) NSNumber<Optional> *question_type; // @synthesize question_type=_question_type;
@property(retain, nonatomic) NSArray<WDModuleStructModel> *module_list; // @synthesize module_list=_module_list;
@property(retain, nonatomic) NSNumber *module_count; // @synthesize module_count=_module_count;
@property(retain, nonatomic) NSString<Optional> *channel_schema; // @synthesize channel_schema=_channel_schema;
@property(retain, nonatomic) WDShowFormatStructModel<Optional> *show_format; // @synthesize show_format=_show_format;
@property(retain, nonatomic) NSArray<WDInviteUserStructModel> *candidate_invite_user; // @synthesize candidate_invite_user=_candidate_invite_user;
@property(retain, nonatomic) WDChannelRecommendStructModel<Optional> *channel_data; // @synthesize channel_data=_channel_data;
@property(retain, nonatomic) NSNumber *has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSArray<WDAnswerStructModel> *ans_list; // @synthesize ans_list=_ans_list;
@property(retain, nonatomic) WDQuestionStructModel *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

