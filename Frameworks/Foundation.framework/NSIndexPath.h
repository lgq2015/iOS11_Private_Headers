/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long * _indexes;
    unsigned long long  _length;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned long long element;
@property (nonatomic, readonly) long long item;
@property (nonatomic, readonly) long long kind;
@property (readonly) unsigned long long length;
@property (getter=pu_isValid, nonatomic, readonly) bool pu_valid;
@property (nonatomic, readonly) long long row;
@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) long long tk_row;
@property (nonatomic, readonly) long long tk_section;
@property (nonatomic, readonly) unsigned long long upNextSection;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned long long*)arg1;
- (void)getIndexes:(unsigned long long*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)indexPathForNavigationListItemIndex:(long long)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_indexPathForItem:(long long)arg1 inSubSection:(long long)arg2 section:(long long)arg3;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(long long)arg2;
+ (id)pu_rootIndexPath;

- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathAfterMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterReloadingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathByAppendingIndexPath:(id)arg1;
- (id)pu_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (bool)pu_isParentOfIndexPath:(id)arg1;
- (bool)pu_isValid;
- (id)pu_shortDescription;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (long long)item;
- (long long)row;
- (long long)section;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_emptyPath;

- (bool)bs_hasPrefix:(id)arg1;
- (id)bs_indexPathByAddingPrefix:(id)arg1;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)arg1;
- (id)bs_subpathFromPosition:(unsigned long long)arg1;
- (id)bs_subpathWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (id)dd_stringValue;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

- (bool)_gkIsGlobal;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)indexPathWithElement:(unsigned long long)arg1 inUpNextSection:(unsigned long long)arg2;

- (unsigned long long)element;
- (unsigned long long)upNextSection;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)na_each:(id /* block */)arg1;
- (id)na_indexPathStartingAtPosition:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 withKind:(long long)arg3;
+ (id)px_indexPathsForItems:(id)arg1 inSection:(long long)arg2;

- (long long)item;
- (long long)kind;
- (id)px_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)px_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (long long)section;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

+ (id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (long long)tk_row;
- (long long)tk_section;

@end
