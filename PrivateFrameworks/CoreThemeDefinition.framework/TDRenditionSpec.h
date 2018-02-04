/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionSpec : NSManagedObject

@property (nonatomic) bool alphaCrop;
@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic) int height;
@property (nonatomic, retain) TDRenditionKeySpec *keySpec;
@property (nonatomic) bool monochrome;
@property (nonatomic) bool opaque;
@property (nonatomic) struct CGPoint { double x1; double x2; } packedPoint;
@property (nonatomic) int packedPointX;
@property (nonatomic) int packedPointY;
@property (nonatomic, retain) NSSet *packedRenditions;
@property (nonatomic, retain) TDRenditionSpec *parentRendition;
@property (nonatomic, retain) TDElementProduction *production;
@property (nonatomic, retain) TDRenditionType *renditionType;
@property (nonatomic) int width;

- (void)awakeFromInsert;
- (bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawPackableRenditionInContext:(struct CGContext { }*)arg1 withDocument:(id)arg2;
- (struct CGPoint { double x1; double x2; })packedPoint;
- (id)renditionType;
- (void)resetToBaseKeySpec;
- (void)setPackedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRenditionType:(id)arg1;
- (bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
