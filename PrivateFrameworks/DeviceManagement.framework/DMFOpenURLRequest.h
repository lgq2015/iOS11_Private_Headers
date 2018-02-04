/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFOpenURLRequest : CATTaskRequest {
    NSString * _URLDisplayName;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *URLDisplayName;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setURLDisplayName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
