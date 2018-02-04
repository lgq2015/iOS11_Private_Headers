/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsCollectionViewDescriptor : MusicEntityCollectionViewDescriptor {
    double  _itemPadding;
    bool  _itemsFillRow;
    unsigned long long  _numberOfItemsPerRow;
}

@property (nonatomic) double itemPadding;
@property (nonatomic) bool itemsFillRow;
@property (nonatomic) unsigned long long numberOfItemsPerRow;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)itemPadding;
- (bool)itemsFillRow;
- (unsigned long long)numberOfItemsPerRow;
- (void)setItemPadding:(double)arg1;
- (void)setItemsFillRow:(bool)arg1;
- (void)setNumberOfItemsPerRow:(unsigned long long)arg1;

@end
