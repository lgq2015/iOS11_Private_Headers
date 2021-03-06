/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetDiagnosticSubmissionEnabledRequest : CATTaskRequest {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

+ (bool)supportsSecureCoding;

- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
