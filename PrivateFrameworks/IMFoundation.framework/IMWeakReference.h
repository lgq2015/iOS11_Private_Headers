/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMWeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;

- (id)copyObject;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initRefWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
