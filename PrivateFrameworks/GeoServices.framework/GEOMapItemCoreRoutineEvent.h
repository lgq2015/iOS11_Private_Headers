/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary * _addressDictionary;
    GEOAddressObject * _addressObject;
    GEOMapItemClientAttributes * _clientAttributes;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDate * _eventDate;
    bool  _eventIsAllDay;
    NSString * _eventName;
    NSString * _eventTitle;
    GEOPlace * _place;
}

- (void).cxx_destruct;
- (id)_clientAttributes;
- (bool)_hasResolvablePartialInformation;
- (id)_place;
- (bool)_responseStatusIsIncomplete;
- (id)addressDictionary;
- (id)addressObject;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (id)eventDate;
- (id)eventName;
- (id)geoAddress;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(bool)arg5 coordinate:(struct { double x1; double x2; })arg6 clientAttributes:(id)arg7;
- (bool)isEventAllDay;
- (bool)isValid;
- (id)name;
- (id)weatherDisplayName;

@end
