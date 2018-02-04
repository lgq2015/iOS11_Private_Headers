/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRWeakRef : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

@property (nonatomic, readonly) id object;

+ (id)weakRefWithObject:(id)arg1;

- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
