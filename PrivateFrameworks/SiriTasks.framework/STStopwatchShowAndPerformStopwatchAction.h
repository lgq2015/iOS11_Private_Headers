/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest {
    unsigned long long  _action;
}

+ (bool)supportsSecureCoding;

- (id)_initWithAction:(unsigned long long)arg1;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
