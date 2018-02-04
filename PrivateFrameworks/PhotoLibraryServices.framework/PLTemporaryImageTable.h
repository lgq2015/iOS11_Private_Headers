/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTemporaryImageTable : NSObject {
    int  _imageFormat;
    PLImageTable * _imageTable;
    NSString * _imageTablePath;
    NSMutableArray * _itemIndexToThumbEntryMapping;
    unsigned long long  _nextTableEntryIndex;
}

- (void)_cleanup;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (id)initWithWithPath:(id)arg1 imageFormat:(int)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;

@end
