/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    NSMutableSet * _mastersToUpload;
    unsigned long long  _totalNumberOfPushedMasters;
    unsigned long long  _totalNumberOfUnpushedMasters;
    unsigned long long  _totalNumberOfUploadedMasters;
    unsigned long long  _totalSizeOfPushedOriginals;
    unsigned long long  _totalSizeOfUnpushedOriginals;
    unsigned long long  _totalUploadedOriginalSize;
    NSMutableDictionary * _trackedResourceMasterUploaded;
    NSMutableDictionary * _trackedResourceProgressSize;
}

@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (id)_constructKeyForIdentifier:(id)arg1 type:(int)arg2;
- (void)addSizeForUnpushedOriginals:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)reset;
- (void)resetIfNeeded;
- (void)setTotalNumberOfUnpushedMasters:(unsigned long long)arg1;
- (void)setTotalNumberOfUploadedMasters:(unsigned long long)arg1;
- (void)setTotalSizeOfUnpushedOriginals:(unsigned long long)arg1;
- (void)setTotalUploadedOriginalSize:(unsigned long long)arg1;
- (void)setupFromCPLManager:(id)arg1;
- (void)setupFromLibrary:(id)arg1;
- (void)stopTracking:(id)arg1;
- (void)stopTrackingResource:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3;
- (unsigned long long)totalNumberOfUnpushedMasters;
- (unsigned long long)totalNumberOfUploadedMasters;
- (unsigned long long)totalSizeOfUnpushedOriginals;
- (unsigned long long)totalUploadedOriginalSize;
- (bool)trackingIdentifier:(id)arg1;
- (void)updateForIdentifier:(id)arg1 progress:(float)arg2 fileSize:(unsigned long long)arg3 type:(int)arg4;
- (void)uploadFinishedForIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 withError:(bool)arg4;

@end
