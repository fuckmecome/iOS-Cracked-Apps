//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTSTableViewDataModel : NSObject
{
    NSMutableArray *_scheduleArray;
    NSMutableArray *_handleDataArray;
}

@property(retain, nonatomic) NSMutableArray *handleDataArray; // @synthesize handleDataArray=_handleDataArray;
@property(retain, nonatomic) NSMutableArray *scheduleArray; // @synthesize scheduleArray=_scheduleArray;
- (void).cxx_destruct;
- (id)timelineCardsForCalendarAtDate:(id)arg1;
- (_Bool)isSameDate:(id)arg1 withSecond:(id)arg2;
- (id)getDateWithString:(id)arg1 dateFormat:(id)arg2;
- (_Bool)isNeedRefreshForFlight;
- (void)resetAllData;
- (id)getShareCardList;
- (id)indexPathWithLocationModel:(id)arg1;
- (id)indexPathForSmartTripId:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)indexGroupById:(int)arg1;
- (_Bool)isDataClear;
- (void)clearAllData;
- (id)getRecommendModel;
- (void)setRecommendList:(id)arg1 isCache:(_Bool)arg2;
- (void)setRecommendList:(id)arg1;
- (void)o_schedule_display_card_list:(id)arg1;
- (void)o_schedule_display_card_list_render:(id)arg1;
- (id)o_schedule_display_card_list_data:(id)arg1 logId:(id)arg2;
- (void)setDataWithSecheduleArray:(id)arg1 isInTimeline:(_Bool)arg2 logId:(id)arg3;
- (id)cardIds:(id)arg1;
- (void)setupCacheData:(id)arg1 logId:(id)arg2;
- (id)init;

@end
