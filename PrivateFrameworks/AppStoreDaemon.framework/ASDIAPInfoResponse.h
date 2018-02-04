/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {
    NSDictionary * _iaps;
}

@property (nonatomic, readonly) NSDictionary *iaps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iaps;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIAPs:(id)arg1;

@end
