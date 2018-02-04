/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItemChange : EKObjectChange {
    EKObjectID * _calendarID;
    NSString * _externalID;
    EKObjectID * _oldCalendarID;
    NSString * _oldExternalID;
}

@property (nonatomic, readonly) EKObjectID *calendarID;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) EKObjectID *oldCalendarID;
@property (nonatomic, readonly) NSString *oldExternalID;

+ (void)fetchCalendarItemChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchCalendarItemChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchCalendarItemChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)calendarID;
- (id)externalID;
- (id)initWithChangeProperties:(id)arg1;
- (id)oldCalendarID;
- (id)oldExternalID;

@end
