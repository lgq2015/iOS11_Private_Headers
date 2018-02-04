/* made by EzioChiu.
 */

@protocol VMUStackLogReader <NSObject>

@required

- (int)enumerateRecords:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned long long, unsigned long long, unsigned long long, void*
- (NSString *)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (bool)inspectingLiveProcess;
- (VMUVMRegionTracker *)regionTracker;
- (NSString *)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (NSString *)sourcePathForPCaddress:(unsigned long long)arg1;
- (bool)usesLiteMode;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;

@optional

- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;

@end
