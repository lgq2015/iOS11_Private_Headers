/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIWishlist : NSObject {
    SSWishlist * _database;
}

@property (nonatomic, readonly) long long accountIdentifier;
@property (nonatomic, readonly, copy) NSArray *items;

+ (id)activeWishlist;

- (void).cxx_destruct;
- (long long)accountIdentifier;
- (void)addItem:(id)arg1;
- (bool)containsItemWithIdentifier:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (void)postChangeNotification;
- (void)removeItemsWithItemIdentifiers:(id)arg1;

@end
