/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {
    NSArray * _purgedApps;
    long long  _purgedSize;
}

@property (nonatomic, readonly) NSArray *purgedApps;
@property (nonatomic, readonly) long long purgedSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2;
- (id)purgedApps;
- (long long)purgedSize;

@end
