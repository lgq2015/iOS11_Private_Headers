/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsDescriptionUpdate : NSObject {
    NSArray * _indexPaths;
    NSIndexSet * _indexSet;
    long long  _updateType;
}

@property (nonatomic, retain) NSArray *indexPaths;
@property (nonatomic, retain) NSIndexSet *indexSet;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (id)indexPaths;
- (id)indexSet;
- (id)initWithUpdateType:(long long)arg1;
- (void)setIndexPaths:(id)arg1;
- (void)setIndexSet:(id)arg1;
- (long long)updateType;

@end
