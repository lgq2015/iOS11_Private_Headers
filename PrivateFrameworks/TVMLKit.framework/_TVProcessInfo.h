/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProcessInfo : NSObject {
    struct __SecTask { } * _currentTask;
    bool  _hasPrivateEntitlement;
    bool  _hasiTunesAPIEntitlement;
}

@property (nonatomic) struct __SecTask { }*currentTask;
@property (nonatomic, readonly) bool hasPrivateEntitlement;
@property (nonatomic, readonly) bool hasiTunesAPIEntitlement;

+ (id)currentProcessInfo;

- (bool)boolValueForEntitlement:(id)arg1;
- (struct __SecTask { }*)currentTask;
- (void)dealloc;
- (bool)hasPrivateEntitlement;
- (bool)hasiTunesAPIEntitlement;
- (id)init;
- (void)setCurrentTask:(struct __SecTask { }*)arg1;
- (id)valueForEntitlement:(id)arg1;
- (bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end
