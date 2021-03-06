//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCNoteInfoModel<Optional>, NSArray<DCColorText><Optional>, NSNumber<Optional>, NSString<Optional>;

@interface DCRouteOrderRouteModel : JSONModel
{
    NSString<Optional> *_route_id;
    NSString<Optional> *_name;
    NSString<Optional> *_departure_time;
    NSString<Optional> *_from_name;
    NSString<Optional> *_to_name;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_from_lat;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_to_address;
    NSString<Optional> *_from_address;
    NSString<Optional> *_from_city_id;
    NSString<Optional> *_to_city_id;
    NSNumber<Optional> *_route_status;
    NSNumber<Optional> *_is_cross_city;
    NSNumber<Optional> *_seat_count;
    NSNumber<Optional> *_show_time_picker;
    NSString<Optional> *_expire_refresh_left;
    NSString<Optional> *_expire_time_left;
    NSArray<DCColorText><Optional> *_trip_desc;
    NSString<Optional> *_starting_poi_id;
    NSString<Optional> *_dest_poi_id;
    NSString<Optional> *_model_type;
    DCNoteInfoModel<Optional> *_to_desc;
    NSString<Optional> *_is_timeout;
    NSString<Optional> *_station_status;
}

@property(copy, nonatomic) NSString<Optional> *station_status; // @synthesize station_status=_station_status;
@property(copy, nonatomic) NSString<Optional> *is_timeout; // @synthesize is_timeout=_is_timeout;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *to_desc; // @synthesize to_desc=_to_desc;
@property(copy, nonatomic) NSString<Optional> *model_type; // @synthesize model_type=_model_type;
@property(copy, nonatomic) NSString<Optional> *dest_poi_id; // @synthesize dest_poi_id=_dest_poi_id;
@property(copy, nonatomic) NSString<Optional> *starting_poi_id; // @synthesize starting_poi_id=_starting_poi_id;
@property(copy, nonatomic) NSArray<DCColorText><Optional> *trip_desc; // @synthesize trip_desc=_trip_desc;
@property(copy, nonatomic) NSString<Optional> *expire_time_left; // @synthesize expire_time_left=_expire_time_left;
@property(copy, nonatomic) NSString<Optional> *expire_refresh_left; // @synthesize expire_refresh_left=_expire_refresh_left;
@property(copy, nonatomic) NSNumber<Optional> *show_time_picker; // @synthesize show_time_picker=_show_time_picker;
@property(copy, nonatomic) NSNumber<Optional> *seat_count; // @synthesize seat_count=_seat_count;
@property(copy, nonatomic) NSNumber<Optional> *is_cross_city; // @synthesize is_cross_city=_is_cross_city;
@property(copy, nonatomic) NSNumber<Optional> *route_status; // @synthesize route_status=_route_status;
@property(copy, nonatomic) NSString<Optional> *to_city_id; // @synthesize to_city_id=_to_city_id;
@property(copy, nonatomic) NSString<Optional> *from_city_id; // @synthesize from_city_id=_from_city_id;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(copy, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(copy, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(copy, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
@property(copy, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
- (void).cxx_destruct;

@end

