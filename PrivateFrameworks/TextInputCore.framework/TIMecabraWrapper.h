/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMecabraWrapper : NSObject {
    struct __Mecabra { } * _mecabraRef;
}

@property (readonly) struct __Mecabra { }*mecabraRef;

- (void)dealloc;
- (id)initWithMecabraRef:(struct __Mecabra { }*)arg1;
- (struct __Mecabra { }*)mecabraRef;

@end
