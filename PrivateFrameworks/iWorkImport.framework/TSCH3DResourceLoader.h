/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DResourceLoader : NSObject

+ (id)loader;

- (void)destroyHandle:(id)arg1 insideContext:(id)arg2;
- (void)postbindHandle:(id)arg1 config:(void*)arg2;
- (bool)shouldReuploadHandle:(id)arg1 config:(void*)arg2;
- (unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;
- (int)virtualScreenForContext:(id)arg1;

@end
