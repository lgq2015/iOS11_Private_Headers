/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface BlockedPlugin : NSObject {
    NSString * _bundleName;
    NSString * _plugName;
    NSString * _plugVersion;
}

@property (readonly) NSString *bundleName;
@property (readonly) NSString *plugName;
@property (readonly) NSString *plugVersion;

- (id)bundleName;
- (void)dealloc;
- (id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3;
- (id)plugName;
- (id)plugVersion;

@end
