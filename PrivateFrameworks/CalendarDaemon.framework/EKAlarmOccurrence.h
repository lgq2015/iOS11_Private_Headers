/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface EKAlarmOccurrence : NSObject {
    NSDate * _acknowledgedDate;
    CADObjectID * _alarmID;
    NSString * _externalID;
    NSDate * _fireDate;
    NSDate * _ownerDate;
    CADObjectID * _ownerID;
    NSTimeZone * _ownerTimeZone;
    NSURL * _ownerURI;
}

@property (nonatomic, readonly) NSDate *acknowledgedDate;
@property (nonatomic, readonly) CADObjectID *alarmID;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) NSDate *ownerDate;
@property (nonatomic, readonly) CADObjectID *ownerID;
@property (nonatomic, readonly) NSTimeZone *ownerTimeZone;
@property (nonatomic, readonly) NSURL *ownerURI;

+ (id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;

- (void).cxx_destruct;
- (id)acknowledgedDate;
- (id)alarmID;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)fireDate;
- (id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)ownerDate;
- (id)ownerID;
- (id)ownerTimeZone;
- (id)ownerURI;

@end
