/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalFoundationPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic, readonly) bool logAutoFlush;
@property (nonatomic, readonly) bool logEmitUserNotifications;
@property (nonatomic, readonly) NSString *logFilePath;
@property (nonatomic, readonly) NSArray *logSimpleConfiguration;
@property (nonatomic, readonly) double simulatedDateForNowOffset;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (bool)logAutoFlush;
- (bool)logEmitUserNotifications;
- (id)logFilePath;
- (id)logSimpleConfiguration;
- (double)simulatedDateForNowOffset;

@end
