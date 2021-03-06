/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraStorage : PTPCameraFolder {
    NSMutableArray * _tempArrayOfAllObjectHandles;
    NSMutableArray * _tempArrayOfAllObjectHandlesToBeIgnored;
}

- (void)dealloc;
- (id)initWithStorageID:(unsigned int)arg1 device:(id)arg2;
- (void)prime;
- (void)refreshInfo;
- (id)tempArrayOfAllObjectHandles;
- (id)tempArrayOfAllObjectHandlesToBeIgnored;

@end
