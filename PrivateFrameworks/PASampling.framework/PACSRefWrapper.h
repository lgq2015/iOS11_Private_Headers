/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PACSRefWrapper : NSObject {
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _csRef;
}

@property (readonly) struct _CSTypeRef { unsigned long long x1; unsigned long long x2; } csRef;

- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })csRef;
- (void)dealloc;
- (id)initWithCSTypeRef:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;

@end
