/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFShowAlarmRequest : AFSiriRequest {
    NSArray * _alarms;
}

@property (nonatomic, copy) NSArray *alarms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarms;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarms:(id)arg1;

@end
