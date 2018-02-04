/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMessageLink : NSObject {
    GEOPDMessageLink * _messageLink;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSString *messageID;
@property (nonatomic, readonly) NSString *messageURLString;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (unsigned long long)currentMessageOpeningHoursOptions;
- (id)initWithMessageLink:(id)arg1;
- (id)messageBusinessHours;
- (id)messageID;
- (id)messageOperationBusinessDates;
- (id)messageURLString;
- (int)responseTime;
- (id)timeZone;

@end
