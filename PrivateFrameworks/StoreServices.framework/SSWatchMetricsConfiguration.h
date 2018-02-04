/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWatchMetricsConfiguration : NSObject <NSCopying> {
    bool  _enabled;
}

@property (getter=isEnabled, nonatomic) bool enabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;

@end
