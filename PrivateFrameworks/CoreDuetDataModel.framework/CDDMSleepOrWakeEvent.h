/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDataModel.framework/CoreDuetDataModel
 */

@interface CDDMSleepOrWakeEvent : NSManagedObject

@property (nonatomic, retain) NSNumber *anonymizedBeacon;
@property (nonatomic, retain) NSNumber *anonymizedLocation;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSNumber *localDaysSinceSunday;
@property (nonatomic, retain) NSNumber *localTime;
@property (nonatomic, retain) NSNumber *localTimeQuarterHourSlot;
@property (nonatomic, retain) NSNumber *networkQuality;
@property (nonatomic, retain) NSNumber *sleepState;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, retain) NSNumber *wakeReason;

@end
