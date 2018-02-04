/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaQueryFeature : NSObject {
    NSString * _featureName;
}

@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) NSArray *notificationNames;
@property (nonatomic, readonly) NSArray *requiredKeys;

+ (bool)supportsFeatureName:(id)arg1;

- (void).cxx_destruct;
- (bool)evaluateWithValues:(id)arg1;
- (id)featureName;
- (id)initWithFeatureName:(id)arg1 value:(id)arg2;
- (id)notificationNames;
- (id)requiredKeys;

@end
