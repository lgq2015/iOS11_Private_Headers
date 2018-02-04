/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedLegacyFace : PLManagedObject

@property (nonatomic, retain) NSString *albumUUID;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) short identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } relativeRect;
@property (nonatomic, retain) NSValue *relativeRectValue;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (void)delete;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })relativeRect;
- (void)setRelativeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
