/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLPointerCountedSet : NSObject {
    unsigned long long  mByteCount;
    unsigned long long  mCount;
    TSUPointerKeyDictionary * mSet;
}

@property (nonatomic, readonly) unsigned long long count;

- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)descriptionWithFrames:(unsigned long long)arg1;
- (id)init;

@end
