/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSApplicationVersionCondition : SSProtocolCondition {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersion;
}

- (void)dealloc;
- (bool)evaluateWithContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
