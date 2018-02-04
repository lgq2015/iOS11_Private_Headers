/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {
    void * _deviceDescriptor;
}

@property (getter=isAbsolute, nonatomic) bool absolute;
@property (getter=isDisplayIntegrated, nonatomic) bool displayIntegrated;
@property (nonatomic) struct CGSize { double x1; double x2; } screenSize;

- (void)dealloc;
- (void*)deviceDescriptor;
- (id)init;
- (bool)isAbsolute;
- (bool)isDisplayIntegrated;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setAbsolute:(bool)arg1;
- (void)setDisplayIntegrated:(bool)arg1;
- (void)setScreenSize:(struct CGSize { double x1; double x2; })arg1;

@end
