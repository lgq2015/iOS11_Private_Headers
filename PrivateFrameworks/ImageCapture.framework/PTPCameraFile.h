/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraFile : ICCameraFile {
    NSString * _path;
    void * _ptpCameraFileProperties;
}

@property (copy) id info;
@property (readonly) unsigned int objHandle;
@property (retain) NSString *path;
@property (readonly) unsigned int storageID;
@property (readonly) unsigned long long type;

- (long long)compare:(id)arg1 against:(id)arg2 withContext:(void*)arg3;
- (void)dealloc;
- (void)finalize;
- (id)info;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned int)arg5 objectHandle:(unsigned int)arg6;
- (id)metadataDict;
- (unsigned int)objHandle;
- (id)path;
- (void)setInfo:(id)arg1;
- (void)setPath:(id)arg1;
- (unsigned int)storageID;
- (id)thumbData;
- (unsigned long long)type;
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;

@end
