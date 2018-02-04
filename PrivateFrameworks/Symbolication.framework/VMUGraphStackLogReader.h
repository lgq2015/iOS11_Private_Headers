/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUGraphStackLogReader : NSObject <NSSecureCoding, VMUStackLogReader> {
    struct { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; unsigned int x10; struct _opaque_pthread_rwlock_t { long long x_11_1_1; BOOL x_11_1_2[192]; } x11; } * _backtraceUniquingTable;
    VMUDebugTimer * _debugTimer;
    VMURangeToStringMap * _functionNameRanges;
    VMUProcessObjectGraph * _graph;
    unsigned int  _nodeNamespaceSize;
    unsigned int * _nodeToStackIdTable;
    VMUVMRegionTracker * _regionTracker;
    VMURangeToStringMap * _sourceInfoRanges;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) VMUProcessObjectGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) bool inspectingLiveProcess;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) Class superclass;
@property (readonly) bool usesLiteMode;

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int*)arg2;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)enumerateRecords:(id /* block */)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })functionRangeContainingPCaddress:(unsigned long long)arg1;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(bool)arg3 stackFramesBuffer:(unsigned long long*)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(bool)arg2 stackFramesBuffer:(unsigned long long*)arg3;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
- (id)graph;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 graph:(id)arg3 debugTimer:(id)arg4;
- (bool)inspectingLiveProcess;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (id)regionTracker;
- (void)setGraph:(id)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })sourceLineRangeContainingPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (bool)usesLiteMode;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;

@end
