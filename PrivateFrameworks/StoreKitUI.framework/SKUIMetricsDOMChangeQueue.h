/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsDOMChangeQueue : NSObject {
    NSMutableArray * _storage;
}

@property (nonatomic, readonly) unsigned long long count;
@property (getter=isEmpty, nonatomic, readonly) bool empty;

- (void).cxx_destruct;
- (void)addPendingChange:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (bool)isEmpty;
- (id)oldestPendingChange;

@end
