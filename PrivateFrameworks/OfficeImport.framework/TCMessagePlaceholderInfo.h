/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessagePlaceholderInfo : NSObject {
    bool  mInUse;
    id  mKey;
}

- (void)dealloc;
- (id)init;
- (bool)isInUse;
- (id)key;
- (void)setInUse:(bool)arg1;

@end
