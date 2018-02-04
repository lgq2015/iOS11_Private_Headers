/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawableDefaults : NSObject {
    OADDrawableCategoryDefaults * mLineDefaults;
    OADDrawableCategoryDefaults * mShapeDefaults;
    OADDrawableCategoryDefaults * mTextDefaults;
}

@property (nonatomic, retain) OADDrawableCategoryDefaults *lineDefaults;
@property (nonatomic, retain) OADDrawableCategoryDefaults *shapeDefaults;
@property (nonatomic, retain) OADDrawableCategoryDefaults *textDefaults;

- (void)addDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)addTextDefaults;
- (void)dealloc;
- (id)description;
- (bool)isEmpty;
- (id)lineDefaults;
- (void)setLineDefaults:(id)arg1;
- (void)setShapeDefaults:(id)arg1;
- (void)setTextDefaults:(id)arg1;
- (id)shapeDefaults;
- (id)textDefaults;

@end
