/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDataModel.framework/CoreDuetDataModel
 */

@interface CDDMBatteryEvent : NSManagedObject

@property (nonatomic, retain) NSNumber *anonymizedBeacon;
@property (nonatomic, retain) NSNumber *anonymizedLocation;
@property (nonatomic, retain) NSNumber *batteryLevel;
@property (nonatomic, retain) NSNumber *computedDischargeRateMilliwatts;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSNumber *localDaysSinceSunday;
@property (nonatomic, retain) NSNumber *localTime;
@property (nonatomic, retain) NSNumber *localTimeQuarterHourSlot;
@property (nonatomic, retain) NSNumber *networkQuality;
@property (nonatomic, retain) NSNumber *sampledMilliwatts;
@property (nonatomic, retain) NSNumber *userId;

@end
