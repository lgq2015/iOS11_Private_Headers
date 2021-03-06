/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraFolder : ICCameraFolder {
    void * _msCameraFolderProperties;
}

@property (readonly) struct timespec { long long x1; long long x2; } fsCreationTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsModificationTime;
@property (readonly) unsigned long long fsSN;
@property (readonly) long long fsSize;

- (void)dealloc;
- (bool)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (void)finalize;
- (id)folderMatchingPath:(id)arg1;
- (struct timespec { long long x1; long long x2; })fsCreationTime;
- (struct timespec { long long x1; long long x2; })fsModificationTime;
- (unsigned long long)fsSN;
- (long long)fsSize;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(struct timespec { long long x1; long long x2; })arg5 fsModificationTime:(struct timespec { long long x1; long long x2; })arg6 fsSize:(long long)arg7 fsFlags:(unsigned int)arg8;
- (id)itemMatchingName:(id)arg1 fsSN:(unsigned long long)arg2 fsCreationTime:(struct timespec { long long x1; long long x2; }*)arg3 fsSize:(long long)arg4;

@end
