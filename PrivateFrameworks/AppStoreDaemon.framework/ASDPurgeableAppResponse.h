/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {
    NSArray * _purgeableApps;
    long long  _purgeableSize;
}

@property (nonatomic, readonly) NSArray *purgeableApps;
@property (nonatomic, readonly) long long purgeableSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2;
- (id)purgeableApps;
- (long long)purgeableSize;

@end
