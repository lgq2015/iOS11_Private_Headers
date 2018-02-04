/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskStackLogReader : NSObject <VMUStackLogReader> {
    VMUVMRegionTracker * _regionTracker;
    VMUTaskMemoryScanner * _scanner;
    unsigned int  _task;
    bool  _usesLiteMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool inspectingLiveProcess;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly) Class superclass;
@property (readonly) bool usesLiteMode;

- (void).cxx_destruct;
- (void)dealloc;
- (int)enumerateRecords:(id /* block */)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (bool)inspectingLiveProcess;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (id)regionTracker;
- (id)scanner;
- (void)setScanner:(id)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (bool)usesLiteMode;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end
