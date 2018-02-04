/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexUpdates : NSObject {
    NSArray * _itemsRequiringIndexing;
    NSArray * _removedDomainIdentifiers;
    NSArray * _removedIdentifiers;
}

@property (nonatomic, copy) NSArray *itemsRequiringIndexing;
@property (nonatomic, copy) NSArray *removedDomainIdentifiers;
@property (nonatomic, copy) NSArray *removedIdentifiers;

+ (id)updates;

- (void)dealloc;
- (id)description;
- (id)itemsRequiringIndexing;
- (id)removedDomainIdentifiers;
- (id)removedIdentifiers;
- (void)setItemsRequiringIndexing:(id)arg1;
- (void)setRemovedDomainIdentifiers:(id)arg1;
- (void)setRemovedIdentifiers:(id)arg1;

@end
