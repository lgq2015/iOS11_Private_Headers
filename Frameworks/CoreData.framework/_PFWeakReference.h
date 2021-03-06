/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFWeakReference : NSObject {
    id  _object;
    long long  _objectAddress;
}

@property (readonly) long long address;
@property (readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (long long)address;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (id)retainedObject;

@end
