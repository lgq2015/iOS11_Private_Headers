/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchScreenshotRequest : CATTaskRequest {
    unsigned long long  _maxHeight;
    unsigned long long  _maxWidth;
    NSString * _sessionToken;
}

@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic, copy) NSString *sessionToken;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxHeight;
- (unsigned long long)maxWidth;
- (id)sessionToken;
- (void)setMaxHeight:(unsigned long long)arg1;
- (void)setMaxWidth:(unsigned long long)arg1;
- (void)setSessionToken:(id)arg1;

@end
