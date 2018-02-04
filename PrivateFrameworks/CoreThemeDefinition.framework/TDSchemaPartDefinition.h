/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDSchemaPartDefinition : NSManagedObject {
    unsigned long long  partFeatures;
    CUIImage * previewImage;
    NSArray * renditionGroups;
    NSArray * renditions;
}

@property (nonatomic, retain) TDSchemaDefinition *element;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long partFeatures;
@property (nonatomic, retain) CUIImage *previewImage;
@property (nonatomic, retain) NSSet *productions;
@property (nonatomic, retain) NSArray *renditionGroups;
@property (nonatomic, copy) NSArray *renditions;
@property (nonatomic, retain) NSString *widgetID;

- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;
- (id)_schema;
- (id)bestPreviewRendition;
- (const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; long long x4; long long x5; struct { char *x_6_1_1; char *x_6_1_2; long long x_6_1_3; unsigned long long x_6_1_4; } x6[12]; }*)cuiPartDefinition;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)displayName;
- (long long)elementID;
- (unsigned long long)partFeatures;
- (long long)partID;
- (id)previewImage;
- (id)renditionGroups;
- (id)renditions;
- (void)setPartFeatures:(unsigned long long)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setRenditionGroups:(id)arg1;
- (void)setRenditions:(id)arg1;
- (void)updateDerivedRenditionData;
- (id)validStatesWithDocument:(id)arg1;

@end
