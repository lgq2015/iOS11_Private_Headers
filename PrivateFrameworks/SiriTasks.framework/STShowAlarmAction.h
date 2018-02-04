/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowAlarmAction : STAlarmAction {
    NSArray * _alarmIds;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlarmIds:(id)arg1;
- (id)alarmIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
