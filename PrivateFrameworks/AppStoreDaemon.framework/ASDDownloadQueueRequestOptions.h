/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions {
    ASDJobManifest * _manifest;
}

@property (nonatomic, copy) ASDJobManifest *manifest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifest:(id)arg1;
- (id)manifest;
- (void)setManifest:(id)arg1;

@end