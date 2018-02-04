/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditMakerOptions : NSObject <NSCopying> {
    bool  _shouldApplySlomo;
    bool  _shouldApplyTrim;
    bool  _shouldApplyTrimInPlace;
}

@property (nonatomic) bool shouldApplySlomo;
@property (nonatomic) bool shouldApplyTrim;
@property (nonatomic) bool shouldApplyTrimInPlace;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setShouldApplySlomo:(bool)arg1;
- (void)setShouldApplyTrim:(bool)arg1;
- (void)setShouldApplyTrimInPlace:(bool)arg1;
- (bool)shouldApplySlomo;
- (bool)shouldApplyTrim;
- (bool)shouldApplyTrimInPlace;

@end
