/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCFObject : NSObject {
    NSString * _name;
    int  _number;
}

+ (id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 suffix:(id)arg6;

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 number:(int)arg2;
- (id)name;
- (int)number;
- (void)setWriteIsPending:(bool)arg1;

@end
