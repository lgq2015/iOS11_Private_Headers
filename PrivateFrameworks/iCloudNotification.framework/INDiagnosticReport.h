/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INDiagnosticReport : NSObject <NSSecureCoding> {
    bool  _disabled;
    NSDate * _nextHeartbeatDate;
    NSString * _pushEnvironment;
    NSString * _pushToken;
    NSArray * _pushTopics;
}

@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSDate *nextHeartbeatDate;
@property (nonatomic, copy) NSString *pushEnvironment;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic, copy) NSArray *pushTopics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)disabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextHeartbeatDate;
- (id)pushEnvironment;
- (id)pushToken;
- (id)pushTopics;
- (void)setDisabled:(bool)arg1;
- (void)setNextHeartbeatDate:(id)arg1;
- (void)setPushEnvironment:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setPushTopics:(id)arg1;

@end
