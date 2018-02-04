/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser * _netServiceBrowser;
    NSMutableArray * _netServices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)aptpRequestDataForFilesImp:(id)arg1;
- (void)aptpRetrieveDataForFilesImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)dealloc;
- (void)deleteFileImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (int)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)handleEventImp:(id)arg1;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (void)syncClockImp:(id)arg1;
- (id)usbLocationIDsOfPTPDevices;

@end
