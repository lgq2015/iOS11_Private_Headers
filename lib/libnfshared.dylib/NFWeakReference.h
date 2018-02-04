/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFWeakReference : NSObject {
    id  _store;
}

@property (getter=getObject, setter=setObject:, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (void)dealloc;
- (id)getObject;
- (id)initWithObject:(id)arg1;
- (void)setObject:(id)arg1;

@end
