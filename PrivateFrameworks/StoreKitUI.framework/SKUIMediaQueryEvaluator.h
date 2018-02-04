/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaQueryEvaluator : NSObject {
    NSMapTable * _cachedFeatureResults;
    <SKUIMediaQueryDelegate> * _delegate;
    NSMutableSet * _observedNotificationNames;
    NSObject<OS_dispatch_source> * _reloadTimer;
}

@property (nonatomic) <SKUIMediaQueryDelegate> *delegate;

+ (void)initialize;
+ (void)registerFeatureClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_delegateValuesForKeys:(id)arg1;
- (void)_featureDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)evaluateMediaQuery:(id)arg1;
- (id)init;
- (void)reloadData;
- (void)setDelegate:(id)arg1;

@end
