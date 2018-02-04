/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionController : MRExternalDeviceController <MRExternalDeviceControllerDelegate> {
    _MRTelevisionControllerBlockCallback * _discoveryCallback;
    _MRTelevisionControllerBlockCallback * _removalCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MRTelevisionControllerBlockCallback *discoveryCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MRTelevisionControllerBlockCallback *removalCallback;
@property (readonly) Class superclass;

+ (Class)externalDeviceClass;

- (void)dealloc;
- (id)discoveryCallback;
- (void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2;
- (id)init;
- (id)removalCallback;
- (void)setDiscoveryCallback:(id)arg1;
- (void)setRemovalCallback:(id)arg1;

@end
