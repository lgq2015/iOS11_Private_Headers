/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeCollectionDataSource : NSObject {
    TSDBasicShapeLibraryCollection * _basicShapeLibraryCollection;
    TSDShapeLibrary * _shapeLibrary;
    TSDUserDefinedShapeLibraryCollection * _userDefinedShapeLibraryCollection;
}

@property (nonatomic, readonly) NSArray *categoryNames;
@property (nonatomic, readonly) unsigned long long indexOfUserDefinedLibraryCategory;
@property (nonatomic, retain) TSDBasicShapeLibraryCollection *p_basicShapeLibraryCollection;
@property (nonatomic, retain) TSDShapeLibrary *p_shapeLibrary;
@property (nonatomic, retain) TSDUserDefinedShapeLibraryCollection *p_userDefinedShapeLibraryCollection;

+ (unsigned long long)p_firstIndexOfShapeLibraryCategories;

- (void).cxx_destruct;
- (id)categoryNames;
- (bool)hasUserDefinedShapesInCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfUserDefinedLibraryCategory;
- (id)initWithShapeLibrary:(id)arg1 basicShapeLibrary:(id)arg2 userDefinedShapeLibrary:(id)arg3;
- (unsigned long long)numberOfShapesInCategoryAtIndex:(unsigned long long)arg1;
- (id)p_basicShapeLibraryCollection;
- (bool)p_hasUserDefinedShapes;
- (unsigned long long)p_indexOfUserDefinedCategory;
- (unsigned long long)p_numberOfCategories;
- (id)p_shapeAtIndex:(unsigned long long)arg1 categoryIndex:(unsigned long long)arg2;
- (id)p_shapeCollectionAtIndex:(unsigned long long)arg1;
- (id)p_shapeLibrary;
- (id)p_userDefinedShapeLibraryCollection;
- (void)setP_basicShapeLibraryCollection:(id)arg1;
- (void)setP_shapeLibrary:(id)arg1;
- (void)setP_userDefinedShapeLibraryCollection:(id)arg1;
- (id)shapeAtIndex:(unsigned long long)arg1 categoryIndex:(unsigned long long)arg2;

@end
