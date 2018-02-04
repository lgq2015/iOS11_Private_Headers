/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupSelection : TSDDrawableSelection {
    bool  _hasSelectedInfosInNonGroupContainer;
}

@property (nonatomic, readonly) NSSet *containerGroups;
@property (nonatomic) bool hasSelectedInfosInNonGroupContainer;
@property (nonatomic, readonly) bool isCrossContainerSelection;

+ (Class)archivedSelectionClass;

- (id)containerGroups;
- (bool)hasSelectedInfosInNonGroupContainer;
- (unsigned long long)hash;
- (id)initWithContainerGroups:(id)arg1 hasSelectedInfosInNonGroupContainer:(bool)arg2;
- (id)initWithGroupInfo:(id)arg1;
- (bool)isCrossContainerSelection;
- (bool)isEqual:(id)arg1;
- (void)setHasSelectedInfosInNonGroupContainer:(bool)arg1;
- (id)subclassDescription;

@end
