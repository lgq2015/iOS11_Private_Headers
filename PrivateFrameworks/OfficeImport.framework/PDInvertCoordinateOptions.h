/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDInvertCoordinateOptions : PDTransitionOptions {
    bool  mIsInvX;
    bool  mIsInvY;
}

- (bool)isInvX;
- (bool)isInvY;
- (void)setIsInvX:(bool)arg1;
- (void)setIsInvY:(bool)arg1;

@end
