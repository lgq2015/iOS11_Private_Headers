/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUDeviceTrait : NSObject <NUDeviceTrait> {
    unsigned long long  _deviceTraitSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceTraitSize;
@property (readonly) unsigned long long hash;
@property (getter=isLandscape, nonatomic, readonly) bool landscape;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deviceTraitSize;
- (id)initWithDeviceTraitSize:(unsigned long long)arg1;
- (bool)isLandscape;

@end
