/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBFontEntity : NSObject {
    int  mCharSet;
    NSString * mFaceName;
    int  mFamily;
    int  mType;
}

- (int)charSet;
- (void)dealloc;
- (id)faceName;
- (int)family;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (int)type;

@end
