/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
    NSDictionary * _deviceMatchingInfo;
    NSMutableDictionary * _devices;
    DeviceManagerThread * _thread;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)aptpRequestDataForFiles:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)aptpRequestDataForFilesImp:(id)arg1;
- (int)aptpRetrieveDataForFiles:(id)arg1 contextInfo:(void*)arg2;
- (void)aptpRetrieveDataForFilesImp:(id)arg1;
- (int)closeDevice:(id)arg1 contextInfo:(void*)arg2;
- (void)closeDeviceImp:(id)arg1;
- (int)closeSession:(id)arg1 contextInfo:(void*)arg2;
- (void)closeSessionImp:(id)arg1;
- (void)dealloc;
- (int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)deleteFileImp:(id)arg1;
- (int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)downloadFileImp:(id)arg1;
- (int)eject:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)enumerateContent;
- (int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)getMetadataOfFileImp:(id)arg1;
- (int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)getThumbnailOfFileImp:(id)arg1;
- (id)init;
- (int)openDevice:(id)arg1 contextInfo:(void*)arg2;
- (void)openDeviceImp:(id)arg1;
- (int)openSession:(id)arg1 contextInfo:(void*)arg2;
- (void)openSessionImp:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (int)syncClock:(id)arg1 contextInfo:(void*)arg2;
- (void)syncClockImp:(id)arg1;

@end
