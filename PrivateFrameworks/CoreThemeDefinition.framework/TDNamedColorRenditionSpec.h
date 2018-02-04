/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (nonatomic) double alpha;
@property (nonatomic) double blue;
@property (nonatomic) long long colorSpaceID;
@property (nonatomic) double green;
@property (nonatomic) double red;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)setColorPropertiesFromCGColor:(struct CGColor { }*)arg1;

@end
