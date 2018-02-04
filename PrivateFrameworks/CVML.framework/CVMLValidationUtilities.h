/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLValidationUtilities : NSObject

+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 error:(id*)arg4;
+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 withCountRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5;
+ (id)faceObservationFromOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3;
+ (bool)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(id /* block */)arg3 error:(id*)arg4;

@end
