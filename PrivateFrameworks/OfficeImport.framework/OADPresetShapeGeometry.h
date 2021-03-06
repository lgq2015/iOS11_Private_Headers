/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetShapeGeometry : OADShapeGeometry {
    int  mType;
}

- (id)description;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;
- (void)setType:(int)arg1;
- (int)type;

@end
