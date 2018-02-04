/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPIdentity : NSObject <NSCopying> {
    void * _backingValue;
}

@property (nonatomic, readonly) void*backingValue;

- (void*)backingValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithBackingValue:(void*)arg1;

@end
