/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider {
    HFAccessoryBrowsingManager * _accessoryBrowsingManager;
    NSMutableSet * _discoveredAccessoryItems;
    id /* block */  _filter;
}

@property (nonatomic, readonly) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property (nonatomic, retain) NSMutableSet *discoveredAccessoryItems;
@property (nonatomic, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)accessoryBrowsingManager;
- (id)discoveredAccessoryItems;
- (id /* block */)filter;
- (id)init;
- (id)initWithAccessoryBrowsingManager:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setDiscoveredAccessoryItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;

@end
