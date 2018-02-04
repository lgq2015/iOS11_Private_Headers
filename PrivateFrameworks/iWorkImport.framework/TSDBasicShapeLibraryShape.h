/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBasicShapeLibraryShape : NSObject <TSDShapeCollectionShape> {
    NSString * _name;
    unsigned long long  _position;
    int  _shapeType;
}

@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) NSArray *baseKeywords;
@property (nonatomic, readonly) NSString *baseName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned long long p_position;
@property (nonatomic, readonly) int shapeType;
@property (readonly) Class superclass;

+ (id)p_baseStringForKey:(id)arg1;
+ (id)p_nameForShapeType:(int)arg1;

- (void).cxx_destruct;
- (id)accessibilityName;
- (id)baseKeywords;
- (id)baseName;
- (unsigned long long)hash;
- (id)initWithShapeType:(int)arg1 position:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)name;
- (unsigned long long)p_position;
- (id)pathSourceWithSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)positionInCategoryWithID:(id)arg1;
- (void)setP_position:(unsigned long long)arg1;
- (int)shapeType;

@end
