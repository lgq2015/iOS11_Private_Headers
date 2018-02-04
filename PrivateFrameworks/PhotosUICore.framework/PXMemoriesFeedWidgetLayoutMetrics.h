/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics {
    struct CGSize { 
        double width; 
        double height; 
    }  _interitemSpacing;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
}

@property (nonatomic) struct CGSize { double x1; double x2; } interitemSpacing;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interitemSpacing;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (void)setInteritemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;

@end
