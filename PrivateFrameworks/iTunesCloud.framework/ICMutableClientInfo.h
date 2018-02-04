/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableClientInfo : ICClientInfo

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *clientVersion;
@property (nonatomic, copy) NSString *processName;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;

@end
