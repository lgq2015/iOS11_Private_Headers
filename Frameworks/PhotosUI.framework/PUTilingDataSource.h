/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingDataSource : NSObject {
    NSHashTable * __changeObservers;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)_changeObservers;
- (id)description;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(bool)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
