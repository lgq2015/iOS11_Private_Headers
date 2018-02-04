/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOSStateHandle : NSObject {
    unsigned long long  _handle;
}

@property (nonatomic, readonly) unsigned long long handle;

- (unsigned long long)handle;
- (id)initWithHandle:(unsigned long long)arg1;

@end