/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeLibraryShape : TSDShapeLibraryObject <TSDShapeCollectionShape> {
    TSUBezierPath * _bezierPath;
    NSString * _bezierPathString;
    NSString * _keywordDelimiter;
    bool  _rendersSlowly;
}

@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) NSString *bezierPathString;
@property (nonatomic, readonly) NSArray *categoryIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *localizationKey;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) TSUBezierPath *p_bezierPath;
@property (nonatomic, copy) NSString *p_keywordDelimiter;
@property (nonatomic, readonly) bool rendersSlowly;
@property (nonatomic, readonly) NSNumber *shapeID;
@property (nonatomic, readonly) int shapeType;
@property (readonly) Class superclass;

+ (id)baseKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2;
+ (id)baseNameForShapeFromDictionary:(id)arg1;
+ (id)localizedKeywordsForShapeFromDictionary:(id)arg1 keywordDelimiter:(id)arg2;
+ (id)localizedNameForShapeFromDictionary:(id)arg1;
+ (id)p_localizationKeyForShapeFromDictionary:(id)arg1;
+ (id)p_stringForKey:(id)arg1 inBaseStringsFileWithName:(id)arg2;
+ (id)shapeIDForShapeFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityName;
- (id)bezierPathString;
- (id)categoryIDs;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 keywordDelimiter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)localizationKey;
- (id)name;
- (id)p_bezierPath;
- (id)p_categoryMetadata;
- (id)p_keywordDelimiter;
- (id)pathSourceWithSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)positionInCategoryWithID:(id)arg1;
- (bool)rendersSlowly;
- (void)setP_bezierPath:(id)arg1;
- (void)setP_keywordDelimiter:(id)arg1;
- (id)shapeID;
- (int)shapeType;

@end
