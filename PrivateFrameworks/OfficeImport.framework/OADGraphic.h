/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphic : OADDrawable {
    OADGraphic * mMasterGraphic;
}

- (id)description;
- (id)geometry;
- (id)graphicProperties;
- (id)masterGraphic;
- (void)setMasterGraphic:(id)arg1;

@end
